#include<stdio.h>
#include<stdlib.h>

double  suma (double op1 , double op2){ return op1 + op2; }
double damenumero(double* operando ) {scanf("%lf",operando);}

int main () {

//*Pedir operandos al usuario*//
//*Calcular la suma//


    double op1,op2;
    double resultado;
    system ("clear");
    printf("Dame el primero operando:");
    damenumero(&op1);
    printf("Dame el segundo numero:");
    damenumero(&op2);
    printf(" %.2lf +%.2lf= %.2lf\n",op1 ,op2 , suma(op1,op2));

    return 0;

}

