#include<stdio.h>
#include<stdlib.h>

int main (){
  char nombre[25];
  char apellidos[25];
    printf("¿Como te llamas?");
    scanf(" %s/n",nombre);
    printf("¿Y tu primer apellido?");
    scanf(" %sh/n",apellidos);
    printf("Te llamas:%s %s\n",nombre,apellidos);
return 0;
}
