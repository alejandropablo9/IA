#ifndef PUZZLE_H
#define PUZZLE_H
#include<iostream>

using namespace std;

class Puzzle{
  int **tablero;
  int x;
  int y;

  public:
    void inicializa();
    void reservar_memoria();
    void rellenar();
    void imprime_matriz();
    void posicionVacio();
    bool puedeIralaDerecha();
    bool puedeIraAbajo();
    bool puedeIralaIzquierda();
    bool puedeIraArriba();
    void iralaDerecha();
    void iraAbajo();
    void iralaIzquierda();
    void iraArriba();
    bool esSolucion();
    int getXVacio();
    int getYVacio();
};
#endif
