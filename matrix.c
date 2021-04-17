#include <stdio.h>
#define ALTURA 3
#define ANCHURA 3

int main() {
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
        printf("%i ,",matriz[i][j]);
      }
    }
    // Iniciar los números, suponiendo que son los primeros
    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    // Recorrer la matriz y comparar
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < ANCHURA; x++) {
            int elementoActual = matriz[y][x];
            if (elementoActual > mayor) mayor = elementoActual;
            if (elementoActual < menor) menor = elementoActual;
        }
    }
    printf("\n::Mayor: %d \n", mayor);
    printf("\n::Menor: %d \n", menor);
}
