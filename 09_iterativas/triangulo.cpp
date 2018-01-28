#include <stdio.h>
#include <stdlib.h>


int main(){

	int L;
	printf("Dimu el numero:");
	scanf(" %i", &L);
	for (int f=0; f<L; f++){
		for (int t=0; t<L; t++)
			for (int c=t?1:0; c<L; c++)
				if (f == c )
					printf("*");
				else 
					printf(" ");
				
				if (f + c == L-1);
					printf("*");
				else 			
					printf(" ");

			 printf("\n");
				        }

	        return EXIT_SUCCESS;
}
