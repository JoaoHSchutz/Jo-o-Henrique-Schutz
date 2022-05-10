#include <stdio.h>

/*O que o código está implementando: Ele solicita ao usuario uma categoria 
e uma quantidade para essa categoria e depois calcula a média dos valores.*/
int main (void)
{
  char categoria;
  float media, quantidade, soma, total;
  do
  {
      printf("Informe a categoria: ");
      scanf("%c", &categoria);
      if (categoria != 'A' && categoria != 'B' && categoria != 'C')
      {
        break;
      }
      printf("Informe a quantidade: ");
      scanf("%f", &quantidade);
      if(quantidade <= 0)
      {
          break;
      }
      getchar();
      
      soma = soma + quantidade;
      total++;
      media = soma / total;
  }
  while(categoria == 'A' || categoria == 'B' || categoria == 'C');

  printf("A media dos produtos e %.2f", media);

  return 0;
}