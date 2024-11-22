%{
#include "calc.tab.h"
%}

digit       [0-9]+
whitespace  [ \t]

%%

{digit}     { yylval = atoi(yytext); return NUMBER; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MULTIPLY; }
"/"         { return DIVIDE; }
\n          { return EOL; }
\x1B        { return ESCAPE; } // Reconhece a tecla ESC
{whitespace}+ { /* Ignorar espaços */ }
[a-zA-Z]+   { printf("Erro: caractere invalido '%s'. Digite apenas numeros e operadores.\n", yytext); }
.           { printf("Token inválido: %s\n", yytext); return 0; }
%%

int yywrap() {
    return 1;
}