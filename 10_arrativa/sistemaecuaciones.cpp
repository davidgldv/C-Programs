#include <stdio.h>
#include <stdlib.h>
#define N 3
/*Imprime por pantalla la tabla*/
void mostrar(double ecua[N-1][N]){
	printf("\n");
	for (int f=0; f<N-1; f++){
		for (int c=0; c<N; c++)
			printf("%6.2lf", ecua[f][c]);
		printf("\n");
	}
	printf("\n");
}
/*Recogida de datos*/
void ecuacion(double ecua[N-1][N]){

	printf("\n");
	printf("Nx + Ny = N ");
	printf("\n");
	printf("Zx + Zy = Z ");
	printf("\n")
		;
	for (int f=0; f<=1; f++){
		for (int c=0 ; c<N ; c++){
			if (f == 0){
			printf("Cuanto vale N:");
			scanf("%lf", &ecua[f][c]);
	           	} 
		}
		if(f!=0) {
		for ( int c=0 ; c<N ; c++){
			printf("Cuanto vale Z:");
			scanf("%lf", &ecua[f][c]);
			}
		}

		}
	printf("\n");
	printf("%6.2lf + %6.2lfy = %6.2lf ",ecua[0][0],ecua[0][1],ecua[0][2]);
	printf("\n");
	printf("%6.2lf + %6.2lfy = %6.2lf ",ecua[1][0],ecua[1][1],ecua[1][2]);
	printf("\n");
}
int main(){ 
		
	double  ecua[N-1][N],
		factor,
		x,
		y,
		res;
	
	ecuacion(ecua);
	printf("\n");
	printf("\n");
	mostrar(ecua);
	y = ecua[0][1] ;
	x = ecua[0][0] ;
	res = ecua[0][2];

/*Normalizar la  primera fila obteniendo el 1 en la posicion que queremos dividiendo toda la fila por la posicion que queremos normalizar  */
	factor=ecua[0][0];
	for (int c=0 ; c<N ; c++){		
		if(factor<0)
			factor*=-1;
			ecua[0][c] = ecua[0][c] / factor;}
	factor = ecua[1][0];
	
	for (int c=0  ; c<N ; c++){
		if(factor<0)
			factor*=-1;
			ecua[1][c] = ecua[1][c] / factor;}
	
	mostrar(ecua);

/*Normalizamos la segunda fila obteniendo 0 en la posicion que buscamos */

	for (int c=0  ; c<N ; c++){
		if (ecua [1][0]>0.00000000000001)
			ecua[1][c] = ecua[1][c] - ecua[0][c];

       		else 
			ecua[1][c] = ecua[1][c] + ecua[0][c];}

	mostrar(ecua);

/*Normalizamos la segunda fila obeniendo el 1 en la posicion que buscamos y obtenemos el valor de y*/
	factor= ecua[1][1];
	for (int c=0 ; c<N ; c++)
		ecua[1][c] /= factor;

	mostrar(ecua);


/*Realizamos la operacion*/

	x =  (res  - (ecua[1][2] * y ) ) / x ;	
	
/*Mostramos el valor de x e y*/

	printf("y:%6.2lf\n", ecua[1][2]);
	printf("x:%6.2lf\n", x);


return 0;
	
}
