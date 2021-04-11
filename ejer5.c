#include <stdio.h>

int main()
{
  double radio;
  double area;
  char continuar='y';
  printf("::Ejercicio 5 Sacar el area de un circulo::\n");
  do
  {
    printf("Ingrese el radio: \n");
    scanf("%lf", &radio);
    area= radio*radio;
    printf("El area del circulo es: \n");
    printf("%f\n",area);
    printf("Desea repetir la operacion (y/n): ");
    scanf( "%s" , &continuar);
  } while(continuar !='n');
  return 0;
}
