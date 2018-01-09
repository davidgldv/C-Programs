#include<stdio.h>
#include<stdlib.h>

int main () {
    int bit1;
    int bit2;
  
    printf("Dame el primer bit:");
    scanf(" %i", &bit1);
    printf("Dame el segundo bit:");
    scanf(" %i", &bit2);
    if(bit1 == 1){
      if(bit2 == 1)
      printf("el numero resultante es 3.\n");
      else printf("el numero resultante es 2.\n.");
     }
    if (bit1 == 0){
     if(bit2 == 1)
     printf("el numero resultante es 1.\n");
     else printf("el numero resultante es 0.\n");

    }

    return 0;
}
