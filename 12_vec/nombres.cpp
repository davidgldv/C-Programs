#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
int main () {

	char **l = NULL;
	char nombre[N] ;
	int len;
	int veces;


	printf("¿Cuantos nombres quieres?:");
	scanf(" %i", &veces);

	for( int c = 0 ; c< veces ; c++){
		printf("Nombre: ");
		scanf(" %[^\n]", nombre);
		len = strlen(nombre);
		l = (char **) realloc(l,(1+c)*sizeof(char *));

		*(l+c) = (char *) realloc (*l,(len + 1)*sizeof(char*));
		strncpy(*l, nombre , N);
		printf("Hola, %s\n", *(l+c));

	}

	for (int c= 0 ; c < veces ; c++)
		free(*(l+c));

	free(l);
		return 0;
	}
