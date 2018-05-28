#include<stdio.h>
#include<stdlib.h>


#define N 0x100

#ifndef NDEGUB
#define DEBUG(...)printf(__VA_ARGS__);
#else
#define DEBUG(...)
#endif

typedef struct {
	int data[N];
	int cima;
}Pila;


void push(int dato,Pila *cual_pila){

	cual_pila->data[cual_pila->cima]=dato;
	cual_pila->cima++;
	DEBUG("-> %5i\n", dato);	

}

int pop(Pila *cual_pila){

	if(cual_pila->cima>0){
		cual_pila->cima--;
		DEBUG("<- %5i\n",cual_pila->data[cual_pila->cima]);	
		return cual_pila->data[cual_pila->cima];
	}
}


int main (){

	Pila numeros;

	numeros.cima=0;

	push(5,&numeros);
	push(7,&numeros);
	push(9,&numeros);
	push(2,&numeros);
	pop(&numeros);
	pop(&numeros);
	push(1,&numeros);
	push(0,&numeros);




return 0;
}
