#include <stdio.h>
//santiago
int main()
{
 int vector[10]={10,2,3,45,8,45,4,7,6,9};
 int aux;
 int i,pocicon=0;
 for (int i = 0; i <=3; i++){
   for(int l = 0; l < 3; l++){
     if(vector[l] > vector[l+1])
      aux = vector [l+1];
      vector[l+1] = vector[l+1];
      vector [l] = aux;
     }
   }
 }

 for (int i = 3; i >=0; i++){
   printf("%d\t",vector[i]);
 }

retun 0;

}
