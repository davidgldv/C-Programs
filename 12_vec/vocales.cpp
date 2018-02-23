#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char frase[] = "Tu moto alpina derrapante";
	char *punt = frase;
	char *fr = frase;
	char vocal[] = "e";

	printf("Elige una vocal: ");
	scanf( " %c", &vocal);
	printf("\n");

	while ( *fr != '\0'){
			printf("%c",*fr);
			*fr++;
	}
	
	printf("\n");
	printf("\n");
	while ( *punt != '\0'){
		
		
		if( *punt == 'o' || *punt == 'e'|| *punt == 'a' || *punt =='i'|| *punt == 'u'){
			*punt = *vocal;
			printf("%c",*punt);
			*punt++;}

		else  {
			printf("%c",*punt);
			*punt++;}		
	}
		printf("\n");
return 0;
}
