#include <stdio.h>

int x, y, np;
int  opcao;

int main(void) 
{  
  for ( opcao = 1; opcao != 2;)
{
  printf("\nInforme um numero positivo: ");
  scanf("%d", &np);

for (x = 1; x <= np; x++) 
{
  for (y = 1; y <= x; y++) 
{
 printf ("%d ", x);
} 
{
 printf ("\n");
}
}
  printf("\nDeseja digitar outro numero?\nDigite 1 para SIM e 2 para NAO! \n");
  scanf("%d", &opcao);
}
  if ( opcao = 2)

  return 0;
}