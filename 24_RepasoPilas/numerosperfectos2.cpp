#include<stdio.h>
#include<stdlib.h>

int suma_div(int num,int div){
      if(div<=0){
          return 1;

      }
      return (num %div == 0 ? div : 0) +suma_div(num,div-1);


}

int main(){

    int num = 6;

    printf("La suma de los divisores del numero %i = %i\n",num ,sum_div(n,n-1));

    return EXIT_SUCCESS;
}
