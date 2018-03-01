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

	l = (char **) realloc(l,veces*sizeof(char *));

	for( int c = 0 ; c< veces ; c++){
		printf("Nombre: ");
		scanf(" %[^\n]", nombre);
		len = strlen(nombre);
		*(l+c) = (char *) malloc ((len + 1)*sizeof(char*));
		strncpy(*(l+c), nombre , len);
        }

	for ( int c =0 ; c < veces ; c++){
                printf("Hola, %s\n", *(l + c));
        }


	for (int c= 0 ; c < veces ; c++)
		free(*(l+c));

	free(l);
		return 0;
	}
