#include <stdio.h>
#include <stdlib.h>

#define N 4
int main(){


	int L;
	printf("Dimu el numero:");
	scanf(" %i", &L);
	for (int f=0; f<L; f++){
		for (int t=0; t<N; t++)
			for (int c=t?1:0; c<L; c++)
				if (f ==  c && t%2==0 )
					printf("*");
				else if (t%2==1 && f + c == L-1)
					printf("*");	
				else 			
					printf(" ");

			 printf("\n");
				        }

	        return EXIT_SUCCESS;
}
