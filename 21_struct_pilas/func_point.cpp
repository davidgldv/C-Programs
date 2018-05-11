#include <stdio.h>
#include <stdlib.h>

#ifndef NDEBUG
#define DEBUG(...) printf(__VA_ARGS__);
#else
#define DEBUG(...) 
#endif

#define N 24
#define MAX 10
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
    int data[MAX];
    int cima;
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
    DEBUG("%i\n",dato);
    return pila->data[pila->cima];
}

double sum(double op1, double op2) { return op1 + op2;  }
double res(double op1, double op2) { return op1 - op2;  }
double mul(double op1, double op2) { return op1 * op2;  }
double div(double op1, double op2) { return op1 / op2;  }

int main(){

    Pila op, datos;
    double op1, op2;
    char opera;
    bool test = true;
    Operacion catalogo[] = {
        {"suma",  &sum},
        {"resta", &res},
        {"multiplacion", &mul},
        {"division", &div}
    };
    datos.cima=0;

    while(test == true){
        printf("Operacion: ");
        scanf(" %lf %c %lf", &op1, &opera, &op2);
        printf("\n");
        test = push(op2, &datos);
        test = push(op1, &datos);
        if (test == true){
            switch(opera) {
                case '+':
                    push(suma, &op);
                    break;
                case '-':
                    push(resta, &op);
                    break;
                case '*':
                    push(multi, &op);
                    break;
                case '/':
                    push(division, &op);
                    break;
            }
        }
    }
    printf("Resultados:\n");
    for(int c=0 ; c<MAX-3 ; c++){
        int sel = pop(&op);
        double res = catalogo[sel].op((double)pop(&datos),(double)pop(&datos));
        printf("%s\n",catalogo[sel].nombre);
        printf("->%c\n",res);


    }


    return EXIT_SUCCESS;
}

