#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int dividendo,int posible_divisor){
	int suma=0;

	if(posible_divisor == 0){
		printf("No es perfecto\n");
		return false;
	}
	if ((dividendo % posible_divisor) == 0) {
		suma += posible_divisor;
		if (suma == dividendo)
			return true;
		if(suma != dividendo){
		return es_perfecto(dividendo,posible_divisor-1);
		}
	}
}

int main(){
	int n;
	printf("Introduce un numero: ");
	scanf("%i",&n);
	printf("\n");
	if(es_perfecto(n,n-1) == true)
		printf("Es perfecto\n");


	return EXIT_SUCCESS;
}
