#include <stdio.h>
#include <stdlib.h>


int main(){
  
    int A;
    printf("Dime un numero goloso:");
    scanf(" %i", &A);

    for (int f=0; f<A; f++){
        for (int c=0; c<A; c++){
            printf ("*");
        }
        for (int c1=0; c1<A; c1++){
            printf (" ");
        }
        for (int c2=0; c2<A; c2++){
            printf ("*");
        }
        printf ("\n");
    }
    for (int f1=0; f1<A; f1++){
        for (int c=0; c<A; c++){
            printf (" ");
        }
        for (int c1=0; c1<A; c1++){
            printf ("*");
        }
        for (int c2=0; c2<A; c2++){
            printf (" ");
        }
        printf ("\n");
    }
    for (int f=0; f<A; f++){
        for (int c=0; c<A; c++){
            printf ("*");
         }
         for (int c1=0; c1<A; c1++){
             printf (" ");
        }
         for (int c2=0; c2<A; c2++){
            printf ("*");
         }
         printf ("\n");
    }
    
    
    
    
    return EXIT_SUCCESS;
}
