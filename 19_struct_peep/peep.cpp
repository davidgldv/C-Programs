#include <stdio.h>
#include <stdlib.h>

#define N 6

struct TEmpleado {
    int id;
    int saldo;
    double sueldo;
    char name[N];
};

int main (){

  struct TEmpleado jefe =  {27,-13,23.5,"Ramon"};
  void *p =(void *) &jefe;

  printf("Jefe reside en %p\n",p);
  for (int i = 0 ; i<sizeof(jefe); i++);
          printf( "%X",((char *)p+1));

  printf ("\n");



return 0;
}
