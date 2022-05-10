#include <stdlib.h>

	int main(void)
  {
		int n1, n2, resto;
		
		printf("Informe o primeiro valor: ");
		scanf("%d", &n1);
		
		printf("Informe o segundo valor: "); 
		scanf("%d", &n2);
		
		if(n1 == 0 || n2 == 0)
		{
			printf("Nao eh possivel realizar divisao por zero\n");
		}

		if (n1 > n2)
		{
		 resto = n1 % n2;
		}
		else if (n1 < n2)
		{
		 resto = n2 % n1;
		}

		printf("O resto da divisao eh: %d", resto);
		
    return 0;
	}