#include <stdlib.h>
#include <stdio.h>

int main(void)
{

int n100,n50,n20,n10,n5,n2;
int m1;
float quant, valor, vt, x, y, z, n, media;
float valor1;
y = 0;

do{
   y++;
   printf("Informe a quantidade de um produto: ", y);
   scanf(" %f", &quant);
   if(quant < 0)
   {
    break;
   }else if(quant > 0){

   printf("Informe o valor unitario do produto: ");
   scanf(" %f", &valor);
   if(valor < 0)
   {
    break;
   }else if(valor > 0){
   vt = quant * valor;
   x = x + vt;
  }
 }
}while (quant != 0);

printf("VALOR TOTAL DA COMPRA: R$ %.2f\n",x);

y = y-1;
media = x / y;
printf("VALOR MEDIO DA COMPRA: R$ %.2f", media);

valor = x;

    n100 = valor/100;
    valor = valor - (n100*100);
    n50 = valor/50;
    valor = valor - (n50*50);
    n20 = valor/20;
    valor = valor - (n20*20);
    n10 = valor/10;
    valor = valor - (n10*10);
    n5 = valor/5;
    valor = valor - (n5*5);
    n2 = valor/2;
    valor = valor - (n2*2);
    m1 = (valor/1);
    valor = valor - (m1*1);

    z = valor;
    n = x - z;
    y = y-1;
    printf("\nO valor final e de %.0f reais e %.2f centavos", n, z);

    printf("\nNotas de R$ 100,00: %d ", n100);
    printf("\nNotas de R$ 50,00: %d", n50);
    printf("\nNotas de R$ 20,00: %d", n20);
    printf("\nNotas de R$ 10,00: %d", n10);
    printf("\nNotas de R$ 5,00: %d", n5);
    printf("\nNotas de R$ 2,00: %d", n2);
    printf("\n\nMoedas de R$ 1,00: %d", m1);

return 0;
}