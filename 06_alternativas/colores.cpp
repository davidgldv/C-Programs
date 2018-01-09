#include<stdio.h>
#include<stdlib.h>

int main () {
   int rojo;
   int amarillo;
   int azul;

printf("Responde las preguntas con 1 si la respuesta es un si y con 0 si la respuesta es un no.\n");    
   printf("¿Mezclas el amarillo?:");
   scanf(" %i", &amarillo);
   printf("¿Mezclas el azul?:");
   scanf(" %i", &azul);
   printf("¿Mezclas el rojo?:");
   scanf(" %i", &rojo);
   if(rojo == 1 && amarillo == 1 && azul == 1 )
       printf("Blanco\n");
   else if (rojo == 1 && amarillo == 1 && azul == 0 )
       printf("Naranja\n");
   else if (rojo == 1 && amarillo == 0 && azul == 1 )
       printf("Morado\n");
   else if (rojo == 1 && amarillo == 0 && azul == 0 )
       printf("Rojo\n");
   else if (rojo == 0 && amarillo == 0 && azul == 1 )
       printf("Azul\n");
   else if (rojo == 0 && amarillo == 1 && azul == 1 )
       printf("Verde\n");
   else if (rojo == 0 && amarillo == 1 && azul == 0 )
       printf("Amarillo\n");
   else if (rojo == 0 && amarillo == 0 && azul == 0 )
       printf("Negro\n");
   else
       printf("Caracter invalido\n");


   return 0;
}
