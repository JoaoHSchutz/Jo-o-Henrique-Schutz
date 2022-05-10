#include <stdlib.h>
#include <stdio.h>

int main(void)
{

float quant, valor, vt, x, y, z;
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

printf("VALOR TOTAL DA COMPRA: R$ %.2f",x);

return 0;
}