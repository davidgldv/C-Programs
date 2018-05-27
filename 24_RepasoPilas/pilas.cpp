#include<stdio.h>
#include<stdlib.h>

#ifndef NDEBUG
#define DEBUG(...) printf(__VA_ARGS__);
#else
#define DEBUG(...) 
#endif

#define N 0x100


typedef struct{
	int data[N];
	int cima;
}Pila;



void push(int dato,Pila *cual_pila){

	cual_pila->data[cual_pila->cima]= dato;
	cual_pila->cima++;
	DEBUG("-> %5i\n ",dato);
}


int pop(Pila *cual_pila){

	cual_pila->cima--;
	DEBUG("-<%5i\n",cual_pila->data[cual_pila->cima]);
	return cual_pila->data[cual_pila->cima];

}
int main (){

	Pila numeros;

	numeros.cima=0;

	push(5, &numeros);
	push(4, &numeros);
	push(-3, &numeros);
	push(100, &numeros);
	pop(&numeros);
	pop(&numeros);
	push(10, &numeros);



	return 0;
}
