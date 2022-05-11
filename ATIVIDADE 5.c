#include <stdio.h>

int nmag, dig;

int main(void)
{

printf("\nAdivinhe o numero magico!\n");

nmag = rand() % 10;

while (nmag != dig)
 {
   printf("Digite o numero magico: ");
   scanf("%d",&dig);

   if ( dig < nmag )
 {
   printf("Errado, muito baixo!\n");
 }
   if ( dig == nmag ) 
 {
   printf("Certo! %d eh o numero magico!\n" ,nmag);
 }
   if ( dig > nmag)
 {
   printf("Errado, muito alto!\n");
 }
}
return 0;
}