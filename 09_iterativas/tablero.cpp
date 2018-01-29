#include <stdio.h>
#include <stdlib.h>

      
int main(){
    int A;
    printf("Dime un numero goloso:");
    scanf(" %i", &A);

    for (int f=0 ; f<A ; f++ ){
      for (int a=0; a<A; a++)
        for (int c=0; c<A; c++)
                    if (f == c)
                        printf ("*");
                   else
                        printf (" ");
              printf("\n");
        
    }
return EXIT_SUCCESS;
}
