#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vector[10]={10,2,3,45,8,45,4,7,6,9};
    int i,j,x,y;
    printf(":: Numeros a ordenar :: \n");
    for (i = 0; i <=10; i++)
    {
      printf("%d",vector[i]);
      printf(",");
    }
    for(i=0;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            x = vector[i] - vector[j];
            if(x>0)
            {
                y = vector[j];
                vector[j] = vector[i];
                vector[i] = y;
            }
        }
    }
    printf("\n---------------------------------\n");
    printf(" \n **Los numeros organizados** \n");
    for(i=0;i<=10;i++)
    {
        printf("%d", vector[i]);
        printf(",");
    }
}
