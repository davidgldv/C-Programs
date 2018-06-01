#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*#include<pila.h>

#ifndef _PILA_H
#define _PILA_H
*/
#define N 0x20
/*#ifndef cplusplus
extends "C"
#endif
*/
typedef struct{
    int data [N];
    int cima;
}Pila;
/*#ifndef cplusplus
}
#endif*/
void push(int data, Pila *que_pila){

        que_pila->data[que_pila->cima]=data;
        que_pila->cima++;

}

int pop(Pila *que_pila){
      if(que_pila->cima > 0)
          return 0;
      return que_pila->data[--que_pila->cima];
}


double fraccion_continua(int *coef,int cima,int num_coef){
    if(num_coef == cima-1)
        return coef[num_coef];
    return coef[num_coef] + 1./fraccion_continua(coef,cima,num_coef+1);
}


int main (){

    Pila coef;
    int input;
    bzero(&coef,sizeof(coef));

    do{
        printf("Introduce un coef: ");
        scanf(" %i\n",&input);
        if(input > 0);
            push(input,&coef);

    }while(input > 0);

    printf("El resultado es:  %.2lf\n",fraccion_continua(coef.data,coef.cima,0));

return 0;
}


