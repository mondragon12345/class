#include <stdio.h>
#define ALTURA 3
#define ANCHURA 3

int main()
{
    int ubicacion=0,sub_ubicacion=0;
    int matriz[ALTURA][ANCHURA] =
    {
            {20,  50, 80},
            {500, 12, 44},
            {56,  4,  3},
    };
    //Recorrer la matriz para mostrar todos los valores
    printf("Valores de la matriz: \n");
    for (int i = 0; i <=2; i++)
    {

      for (int j = 0; j <=2; j++)
      {
          printf("ubicacion: %d,%d y valor: %i \n",ubicacion,sub_ubicacion,matriz[i][j]);
          sub_ubicacion= sub_ubicacion+1;
      }
      ubicacion= ubicacion+1;
      sub_ubicacion= 0;


    }
    //Las variables ubicacion y sub_ubicacion son para la ubicacion de los valores mañores y menores
     int ubicacion_mayor=0,sub_ubicacion_mayor=0,ubicacion_menor=0,sub_ubicacion_menor=0;
    // Iniciar los números, suponiendo que son los primeros
    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    // Recorrer la matriz y comparar ademas ubicar el mayor y el menor
    for (int y = 0; y < ALTURA; y++)
     {
        for (int x = 0; x < ANCHURA; x++)
         {
            int elementoActual = matriz[y][x];
            if (elementoActual > mayor)
            {
              mayor = elementoActual;
              ubicacion_mayor=y;
              sub_ubicacion_mayor=x;
            }
            if (elementoActual < menor)
            {
              menor = elementoActual;
              ubicacion_menor=y;
              sub_ubicacion_menor=x;
            }

        }

    }
    printf("\n RESUMEN \n");
    printf("\n::Numero Mayor: %d  y ubicacion: %d,%d \n", mayor,ubicacion_mayor,sub_ubicacion_mayor);
    printf("\n::Numero Menor: %d  y ubicacion: %d,%d \n", menor,ubicacion_menor,sub_ubicacion_menor);
}
