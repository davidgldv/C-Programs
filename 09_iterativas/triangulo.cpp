#include <stdio.h>
<<<<<<< HEAD
#include<stdlib.h>


int main () {

    int n;
    printf("Dime numero:");
    scanf(" %i", &n);

    for (int f=0 ; f<n ; f++){
         for (int c=0 ; c<f+1 ; c++)

                    printf("*");
                    printf("\n");
    }


  return 0;
=======
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
>>>>>>> b69a5c88aea5bd038d3a6f1af9d3d33d7ad435e6
}
