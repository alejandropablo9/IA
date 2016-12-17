#include<iostream>
#include<Puzzle.cpp>
#include<stdio.h>

bool solucion = false;

void busqueda_profundidad(Puzzle p, int profundidad){
  if(!solucion){
    printf("profundida = %d\n", profundidad);
    p.imprime_matriz();
    if(p.esSolucion()){
      printf("Solucion Encontrada :)\n");
      solucion = true;
    }else if(profundidad == 15 ){
     return;
    }
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
}

int main(){
  Puzzle p;
  p.inicializa();
  busqueda_profundidad(p, 0);
  return 0;
}
