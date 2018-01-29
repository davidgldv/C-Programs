#include <stdio.h>
#include<stdlib.h>


int main () {

    int n;
    printf("Dime numero:");
    scanf(" %i", &n);

    for (int f=0 ; f<n ; f++){
         for (int c=0 ; c<f+1 ; c++)

                    printf("*");
                    printf("\n");
    }


  return 0;
}
