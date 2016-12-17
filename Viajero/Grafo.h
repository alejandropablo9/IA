#ifndef GRAFO_H
#define GRAFO_H
#include<iostream>

using namespace std;

class Arista;

class Vertice{
  Vertice *sig;
  Arista *ady;
  char c;
  friend class Grafo;
};

class Arista{
  Arista *sig;
  Vertice *ady;
  int distancia;
  friend class Grafo;
};

class Grafo{
  Vertice *h;
  public:
    void inicializa();
    bool isEmpty();
    int size();
    Vertice *getVertice(char c);
    void insertArista(Vertice *origen, Vertice *destino, int distancia);
    void insertVertice(char c);
    void listadeAdyacencia();
    void recorridoRustico(Vertice *origen);
};

#endif
