#include<stdio.h>
#include<stdlib.h>

int main () {
   int numero;

   printf("Numero: ");
   scanf(" %i", &numero);
   if(numero % 2 == 0) {
      printf("El numero %i es par\n", numero);
      printf("Los pares me molan");
   }
   else printf("El numero %i es un impar de mierda!\n", numero);
 printf("Y colorin colorado este cuento se ha acabado \n");

return 0;
}
