#include <stdio.h>
#include <stdlib.h>

      
int main(){
  //Pintar cada:
  //fila de cuadrados
  //  fila
  //      columna de cuadrados
  //        columna
  //          si f+c par
  //          *
  //          sino 
  //          ' '
  //  salto de linea
    int A;
    printf("Dime un numero goloso:");
    scanf(" %i", &A);

    for (int fc=0; fc<A; fc++){
        for (int f=0; f<A; f++){
            for (int cc=0; cc<A; cc++)
                for (int c=0; c<A; c++)
                    if ((fc + cc) % 2)
                        printf (" ");
                   else
                        printf ("*");
        printf("\n");
        }
  }
return EXIT_SUCCESS;
}
