#include <stdio.h>
int main()
{
int vector[5];
int i;
for (i=1;i<=5;i++)
 {
   printf("Ingrese numero ");
   printf("%d",i);
   printf(":\n");
   scanf("%d", &vector[i]);
 }
 printf("numeros ingresados \n");
 for (i=1;i<=5;i++)
 {
  printf("%d",vector[i]);
  printf(",");
 }
  return 0;


}
