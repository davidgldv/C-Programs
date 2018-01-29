#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(){
        int n;
        printf("Dime el tamaño:");
        scanf(" %i", &n);
        for (int f=0; f<n; f++){
            for (int t=0; t<N; t++)
                  for (int c=t?1:0; c<n; c++)
                      if (f == c && t%2 == 0)
                        printf("*");
                      else if ( t%2!=0 && f + c == n-1 )
                        printf("*");
                      else
                        printf(" ");
                        printf("\n");
                                }

            return EXIT_SUCCESS;
        }

