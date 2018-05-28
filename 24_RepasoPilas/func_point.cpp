#include<stdio.h>
#include<stdlib.h>


#ifndef NDEBUG
#define DEBUG (...) printf(__VA_ARGS__)
#else
#define DEBUG(...)
#endif


#define N 24
#define MAX 10

typedef struct{
	int data[N];
	int cima;
}Pila;

typedef struct{
	char nombre[N];
	double (*op)(double,double);
}Operacion;


enum {
	suma,
	resta,
	multiplicacion,
	division,
	OPERADOR
};
bool push(int dato, Pila *pila){
	if(pila->cima >= MAX){
		return false;
	}

	pila->data[pila->cima]= dato;
	pila->cima++;
	return true;
}

int pop(Pila *pila){
	if(pila->cima <=0){
		return 0;
	}
	pila->cima--;
	return pila->data[pila->cima];


}
double sum(double op1, double op2) { return op1 + op2;  }
double res(double op1, double op2) { return op1 - op2;  }
double mul(double op1, double op2) { return op1 * op2;  }
double div(double op1, double op2) { return op2 / op1;  }

int main (){

	Pila datos, op;
	datos.cima=0;
	op.cima=0;
	bool test=true;
	double op1,op2;
	char operador;

	Operacion catalogo[] =
	{
		{"suma", &sum},
		{"resta",&res},
		{"multiplicacion",&mul},
		{"division",&div}
	};

	while(test==true){
		printf("Introduce Operacion: \n");
		scanf(" %lf %c %lf",&op1 ,&operador , &op2);
		printf("\n");
		test = push(op1,&datos);
		test = push(op2,&datos);
		if(test == true){
		switch(operador){
			case '+':
				push(suma,&op);
				break;
			case '-':
				push(resta,&op);
				break;
			case '*':
				push(multiplicacion,&op);
				break;
			case '/':
				push(division,&op);
				break;
			}
		}
	}
	for(int c=0 ; c<MAX/2 ; c++){
		int sel = pop(&op);
		double res = catalogo[sel].op((double)pop(&datos),(double)pop(&datos));
		printf("%s\n",catalogo[sel].nombre);// Nos mostraria el nombre de la operacion
		printf("Resultado=%lf\n",res);

	}



	return 0;
}
