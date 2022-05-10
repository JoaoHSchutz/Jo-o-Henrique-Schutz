#include <stdio.h>

int main(void)
{
	char resposta;
	float temperatura;

	printf("Paciente se sente bem? ");
	scanf(" %c", &resposta);
	
	if ( resposta == 's'){
	  printf("Saudavel!");
	}else if ( resposta == 'n'){
	  printf("Paciente tem dor? ");
	  scanf(" %c", &resposta );
		
	if ( resposta == 's'){
	  printf("Doente!");	
	}else if ( resposta == 'n'){
	  printf("Temperatura do paciente? ");
	  scanf(" %f", &temperatura);
			
	if ( temperatura >= 37 ){
	   printf("Doente!");
	}
    else{
	   printf("Saudavel!\n");
		}
	  }
	}
  return 0;
}