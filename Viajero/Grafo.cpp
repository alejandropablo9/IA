
#include<Grafo.h>
#include<list>
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
/*
bool comprobarLista(list<char> lista, char c){
  list<char>::iterator pos;
  pos = lista.begin();
  while(pos != lista.end()){
    if(*pos == c)
      return true;
  }
  return false;
}

recorridoRustico(Vertice *vInical, list<char> listaC){
  if(listaC.size() == 11){
    return lista;
  }else{
    if(!comprobarlist(list<char> listaC, vInicial->c)){
      listaC.push_back(c);
    }else{}

  }
}

*/
