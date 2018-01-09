#include<stdio.h>
#include<stdlib.h>

int main () {
    int bit1;
    int bit2;
  
    printf("Dame el primer bit:");
    scanf(" %i", &bit1);
    printf("Dame el segundo bit:");
    scanf(" %i", &bit2);
    if(bit1 == 1 && bit2 == 1)
      printf("el numero resultante es 3.\n");
      else if (bit1 == 1 && bit2 == 0)
          printf("el numero resultante es 2.\n.");
      else  if (bit1 == 0 && bit2 == 1 )
          printf("el numero resultante es 1.\n");
      else if (bit1 == 0 && bit2 == 0) 
          printf("el numero resultante es 0.\n");
      else
          printf("el numero es distinto de 0 o 1 \n");


    return 0;
}
