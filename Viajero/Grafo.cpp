#include <stack>
#include <list>
#include "Grafo.h"

void Grafo::inicializa(){
  h = NULL;
}

bool Grafo::isEmpty(){
  return (h == NULL);
}

int Grafo::size(){
  Vertice *aux;
  aux = h;
  int i = 0;
  while(aux != NULL){
    aux = aux->sig;
    i++;
  }
  return i;
}

Vertice *Grafo::getVertice(char c){
  Vertice *aux = h;
  while (aux != NULL){
    if(aux->c == c){
      return aux;
    }
    aux = aux->sig;
  }
  return NULL;
}

void Grafo::insertVertice(char c){
  Vertice *nuevo = new Vertice;
  nuevo->c= c;
  nuevo->sig = NULL;
  nuevo->ady = NULL;
  if(isEmpty()){
    h = nuevo;
  }else{
    Vertice *aux = h;
    while(aux->sig != NULL){
      aux = aux->sig;
    }
    aux->sig = nuevo;
  }
}

void Grafo::insertArista(Vertice *origen, Vertice *destino, int distancia){
  Arista *nuevo = new Arista;
  nuevo->distancia = distancia;
  nuevo->sig = NULL;
  nuevo->ady = NULL;

  Arista *aux;
  aux = origen->ady;
  if(aux == NULL){
    origen->ady = nuevo;
    nuevo->ady = destino;
  }else{
    while (aux->sig != NULL) {
      aux = aux->sig;
    }
    aux->sig = nuevo;
    nuevo->ady = destino;
  }
}


void Grafo::listadeAdyacencia(){
  Vertice *vAux;
  Arista *aAux;

  vAux = h;
  while (vAux != NULL) {
    cout<<vAux->c<<"->";
    aAux = vAux->ady;
    while(aAux != NULL){
      cout<<aAux->ady->c<<"->";
      aAux = aAux->sig;
    }
    vAux = vAux->sig;
    cout<<endl;
  }

}

void Grafo::recorridoRustico(Vertice *origen){
  int band, band2;
  Vertice *actual;
  stack<Vertice> pila;
  list<Vertice> lista;
  list<Vertice>::iterator i;

  pila.push(origen);
/*
  while (!pila.empty()) {
    band = 0;
    actual = pila.top();
    pila.pop();

    for(i = lista.begin(); i != lista.end(); i++){
      if(i == actual ){
        band = 1;
      }
    }

    if(band==0){
      cout << actual-> c << ", ";
      lista.push_back(actual);

      Arista *aux;
      aux= actual->ady;

      while (aux != NULL) {
        band2 = 0;
        for(i = lista.begin(); i != lista.end(); i++){
          if(i == actual ){
            band2 = 1;
          }
        }
        if(band2 == 0){
          pila.push(aux->ady);
        }
        aux = aux->sig;
      }

    }
  }*/
}
