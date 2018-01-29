#include<stdio.h>
#include<stdlib.h>

int suma (int op1 , int op2){ return op1 + op2; }

int main () {

//*Pedir operandos al usuario*//
//*Calcular la suma//


    double op1,op2;
    double resultado;
    system("clear");
    printf("¿Cual es el primer operando?");
    scanf("%i", &op1);
    printf("¿Cual es el segundo operando?");
    scanf("%i", &op2);
    resultado =suma (op1,op2);
    printf("%i\n",resultado);
    return 0;

}

