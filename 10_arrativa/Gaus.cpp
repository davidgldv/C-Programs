#include <stdio.h>
#include <stdlib.h>

#define N 3
/*
 1ºNormaliza la fila N (Div filan/columnai)
 2ºApunta el coelficiente
 3ºBusco los 0 en las columnas n de todas las filas inferiores.
 En la fila i le resto ain la fila n
 */
int main(){
    double coef;
    double coef1;
    double sum = 0;
    double a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int c==0 ; c<N ; c++)
        for (int f==0; f<N ; f++)
            if (a[0][0]!=1){
                 coef=a[0][0]
                 (a[0][0], a[0][1], a[0][2])/ a[0][0];
                 

    }
    /*
     for (int d=0; d<N; d++){
        int diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[e][(d+e)%N];
        printf("diag = %i\n", diag);
        sum +=diag;
    }

    for (int d=0; d<N; d++){
        int diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[(e+d)%N][N-1-e];
        printf("diag = %i\n", diag);
        sum -=diag;
    }

    printf("Determinante = %i\n", sum);
*/
  
    return 0;
}
