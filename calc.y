%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void yyerror(const char *s);
int yylex();
bool running = true; // Controle do loop principal
%}

%token NUMBER PLUS MINUS MULTIPLY DIVIDE EOL ESCAPE
%left PLUS MINUS
%left MULTIPLY DIVIDE

%%
input:
    /* vazio */
    | input line
;

line:
    expr EOL {
        printf("Resultado: %d\n", $1);
        printf("Digite outra expressao aritmetica ou pressione ESC para sair:\n");
    }
    | ESCAPE {
        printf("Programa encerrado.\n");
        running = false;
    }
;

expr:
    NUMBER {
        $$ = $1;
    }
    | expr PLUS expr {
        $$ = $1 + $3;
    }
    | expr MINUS expr {
        $$ = $1 - $3;
    }
    | expr MULTIPLY expr {
        $$ = $1 * $3;
    }
    | expr DIVIDE expr {
        if ($3 == 0) {
            printf("Erro: divisão por zero\n");
            exit(1);
        }
        $$ = $1 / $3;
    }
;
%%
void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    printf("Digite a expressao aritmetica desejada (adicao, subtracao, divisao ou multiplicacao) (ex: 13+777*313):\n");
    printf("Pressione ESC para sair.\n");

    while (running) {
        yyparse(); // Loop principal para manter o programa ativo
    }

    return 0;
}
