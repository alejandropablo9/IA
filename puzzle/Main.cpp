#include<iostream>
#include<Puzzle.cpp>
#include<stdio.h>

void busqueda_profundidad(Puzzle p, int profundidad){
  printf("%d\n", profundidad);
  p.imprime_matriz();
  if(profundidad == 15)
   return;
  else if(p.esSolucion())
    p.imprime_matriz();
  if(p.puedeIralaDerecha()){
    p.iralaDerecha();
    busqueda_profundidad(p, profundidad + 1);
  }
  if(p.puedeIraAbajo()){
    p.iraAbajo();
    busqueda_profundidad(p, profundidad + 1);
  }
  if(p.puedeIralaIzquierda()){
    p.iralaIzquierda();
    busqueda_profundidad(p, profundidad + 1);
  }
  if(p.puedeIraArriba()){
    p.iraArriba();
    busqueda_profundidad(p, profundidad + 1);
  }
}

int main(){
  Puzzle p;
  p.inicializa();
  busqueda_profundidad(p, 0);
  return 0;
}
