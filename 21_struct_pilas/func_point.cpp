#include <stdio.h>
#include <stdlib.h>

#ifndef NDEBUG
#define DEBUG(...) printf(__VA_ARGS__);
#else
#define DEBUG(...) 
#endif

#define N 24
#define MAX 0x100

int error = 0;
const char *mssg[] = {
	"Todo OK.",
	"Pila vacía.",
	"Pila llena."
};
typedef struct {
	char nombre[N];
	double (*op)(double, double);
} Operacion;

typedef struct {
	double data[MAX];
	double cima;
} Pila;

enum {
	suma,
	resta,
	multi,
	division,
	OPERA
};

bool push(int dato, Pila *pila){
	if (pila->cima >= MAX){
		error = 2;
		return false;
	}
	error = 0;
	pila->data[pila->cima++] = dato;
	return true;
}

int pop(Pila *pila) {
	if (pila->cima == 0){
		error = 1;
		return 0;
	}
	error = 0;
	pila->cima--;
	DEBUG("%i", pila->data[pila->cima]);
	return pila->data[pila->cima];
}



double sum(double op1, double op2) { return op1 + op2; }
double rest(double op1, double op2) { return op1 - op2; }
double mul(double op1, double op2) { return op1 * op2; }
double div(double op1, double op2) { return op1 / op2; }

int main(){
	double res;
	Pila op, datos, resultados;
	double op1, op2;
	char opera;
	int vez,cont;
	Operacion catalogo[] = {
		{"suma",  &sum},
		{"resta", &res},
		{"multiplacion", &mul},
		{"division", &div}
	};

	datos.cima=0;
	res.cima=0;
	cont=vez;

	printf("¿Cuantas operaciones quieres realizar?: ");
	scanf(" %i", &vez);
	for(int c = 0 ; c<vez ; c++){
		printf("Operacion: ");
		scanf(" %lf %c %lf", &op1, &opera, &op2);
		push(op2, &datos);
		push(op1, &datos);
		switch(opera) {
			case '+':
				push(suma, &op);
				sum(op1,op2);
				//push(, &resultados);
				break;			
			case '-':
				push(resta, &op);
				rest(op1,op2);
				//push(res, &resultados);
				break;
			case '*':
				push(multi, &op);
				mul(op1,op2);
				//push(res, &resultados);
				break;
			case '/':
				push(division, &op);
				div(op1,op2);
				//push(res, &resultados);
				break;
		}
	}
	/*for(int c = 0 ; c<vez ; c++){
		printf("El Resultado de la operacion n%i es : ", cont);
		cont--;
		pop(&res);	
	}*/
	printf("\n");
return EXIT_SUCCESS;
}

