#ifndef LISTA_H
#define LISTA_H
#include<iostream>

using namespace std;

class Nodo{
  Lista *sig;
  char c;
};

class Lista{
  Nodo *h;
  public:
    void inicializa();
    bool isEmpty();
    int size();
};

#endif
