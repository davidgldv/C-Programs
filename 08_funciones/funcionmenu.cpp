#include<stdio.h>
#include<stdlib.h>



int main() {

unsigned opcion;
    system("toilet --gay -fpagga MENU");

        printf("Elige una opcion:\n"
                "\n"
                "\t1.Triangulo.\n"
                "\t2.Cuadrado.\n"
                "\t3.Circulo.\n"
                "\n"
                "\tOpcion:"              );
            scanf(" %u", &opcion);

      switch(opcion) {
          case 1:
              printf("Triangulo.\n");
              break;
          case 2:
              printf("Cuadrado.\n");
              break;
          case 3:
              printf("Circulo.\n");
              break;
      }

    return 0;
}
