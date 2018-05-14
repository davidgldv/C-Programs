#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>

#define N 4
#define MAX 0x100

typedef struct{
    double x;
    double y;

}Coord;

typedef struct Movil{
    Coord pos;
    Coord vel;
    Coord acc;
    double (*haz)(double,double);
}Movil;

/*typedef struct{
    int dato[MAX];
    int cima:
}Pila;

bool push(int dato, Pila *pila){
    if(pila->cima >=MAX){
        error=2;
        return false
    }
    error = 0;
    pila->dato[pila->cima++] = dato;
    return true;

}
double pop(Pila *Pila){
    if(pila->cima == 0){
        error = 1;
        return 0;
    }
    cima--;
    return pila->data[pila->cima];
}*/
int up(Movil *obj) { return obj->pos.y++;}
int left(Movil *obj) { return obj->pos.x--;  }
int down(Movil *obj) { return obj->pos.y--;  }
int right(Movil *obj) { return obj->pos.x++;  }

void pintar(Movil obj[N]){
     for(int i = 0; i< 4 ; i++)
        mvprintw(LINES - obj[i].pos.y,obj[i].pos.x, "[]");
    refresh();
}
int main () {
    Movil obj[N] =
    {{2.,2.},{0.,0.},{0.,0.},{&up}};
    {{25.,25.} ,{0.,0.},{0.,0.},{&right};
    {{50.,50.} ,{0.,0.},{0.,0.},{&left};
    {{75.,75.} ,{0.,0.},{0.,0.},{&down};

    initscr();
    curs_set(0);
    while(1){
        pintar(obj);
        for(int i = 0 ; i <= 4 ; i++)
          obj[i].pos=obj.haz(&obj);
    }
    curs_set(1);
    endwin;

return 0;
}


