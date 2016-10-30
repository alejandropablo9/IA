#include<Lista.h>

void Lista::inicializa(){
  h = NULL;
}

bool Lista::isEmpty(){
  return (h == NULL);
}

int Lista::size(){
  Nodo *aux;
  aux = h;
  int i = 0;
  while(aux != NULL){
    aux = aux->sig;
    i++;
  }
  return i;
}
