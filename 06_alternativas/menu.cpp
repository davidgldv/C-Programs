#include<stdio.h>
#include<stdlib.h>

#define Triangulo 1
#define Cuadrado 2
#define Paralelogramo 3
#define Pentagono 4
#define Circulo 5
int main () {
    unsigned opcion;
    system("toilet --gay -fpagga AREAS");

    printf(
            "Elege la figura:\n"
            "\n"
            "\t1.Triangulo.\n"
            "\t2.Cuadrado.\n"
            "\t3.Paralelogramo.\n"
            "\t4.Pentagono.\n"
            "\t5.Circulo.\n"
            "\n"
            "\tOpcion:"
          );
    scanf(" %u", &opcion);

    switch(opcion) {
         case 1:
            printf("△");
            break; 
         case 2:
            printf("□ ");
            break;
         case 3:
            printf("▱ ");
            break;
         case 4:
            printf("⬠ ");
            break;
         case 5:
            printf("○ ");
            break;
         default:
            printf("Del 1 al 5 idiota\n");

 }
    return 0;
}
