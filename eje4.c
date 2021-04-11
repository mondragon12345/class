#include <stdio.h>

int main()
{
  double promedio;
  double suma;
  int estudiantes;
  double nota;
  int i;
  int x;
  printf("::Ejercio 4 Solicar 10 notas y sacar el promedio y calificarlo::\n");
  printf("Cuantos estudiantes desea evaluar : \n");
  scanf("%d", &estudiantes);
  for (i = 1; i<=estudiantes ; i++)
  {

    for (x = 1; x <=10; x++)
    {
      printf("Estudiante ");
      printf("%d",i);
      printf(" :\n");
      printf("Nota ");
      printf("%d",x);
      printf(" :\n");
      scanf("%lf", &nota);
      suma= suma+nota;
    }
    promedio= suma/10;
    if (promedio>3.5)
     {
       printf("-----------------------------\n");
       printf("Estudiante ");
       printf("%d",i);
       printf(" :\n");
       printf(" Aprobado\n");
       printf("Promedio: \n");
       printf("%f \n",promedio);
       printf("-----------------------------\n");
     }
     else
     {
       printf("-----------------------------\n");
       printf("Estudiante ");
       printf("%d",i);
       printf(" :\n");
       printf(" Reprobado\n");
       printf("Promedio: \n");
       printf("%f \n",promedio);
       printf("-----------------------------\n");
     }
  }
  return 0;
}
