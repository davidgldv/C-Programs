#include <stdio.h>
#include <stdlib.h>

#define N 3
<<<<<<< HEAD
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
=======

void ver(double a[N][N]){
	printf("\n");
		for (int f=0; f<N; f++){
			for (int c=0; c<N; c++)
				printf("%6.2lf", a[f][c]);
				printf("\n");
					    }
		    printf("\n");
}

int main(){
	    double a[N][N] = {
		
		{2, 3, 4},
		{4, 7, 1},
		{6, 2, 3}
			        },
		coef[N], k, det=1;
	    int cima = 0;
	     // Normalizo la fila n
	     // Apunto el coeficiente n
	     // Busco los 0's en las filas inferiores
	     // Resto a la fila i la fila n multiplicada por ain
ver(a);

    for (int n=0; n<N; n++){
	coef[cima++] = k = a[n][n];
	fprintf(stderr," %lf,%lf,%lf", coef[cima++], k, a[n][n]);
	for (int col=0; col<N; col++){
		a[n][col] /= k;
	fprintf(stderr,"%i,%lf,%lf",col,a[n][col],a[n][n]);}
	for (int f=n+1; f<N; f++){
			k = a[f][n];
	fprintf(stderr," %i,%lf,", f,a[f][n]);
	for (int col=0; col<N; col++){
		a[f][col] -= (a[n][col] * k);
	fprintf(stderr,"%lf,%lf", a[f][col],a[n][col]);
					}
		}								          
       	ver(a);
}

        for (int i=0; i<N; i++){
		det *= coef[i];
	fprintf(stderr,"%6.2lf,%lf", coef[i],det);
		 printf("Determinante: %lf\n", det);}
return EXIT_SUCCESS;
>>>>>>> b69a5c88aea5bd038d3a6f1af9d3d33d7ad435e6
}
