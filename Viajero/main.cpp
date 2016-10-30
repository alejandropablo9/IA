#include<iostream>
#include<Grafo.cpp>

Grafo ciudad;

void insertar_vertices(){
    ciudad.insertVertice('a');
    ciudad.insertVertice('b');
    ciudad.insertVertice('c');
    ciudad.insertVertice('d');
    ciudad.insertVertice('e');
    ciudad.insertVertice('f');
    ciudad.insertVertice('g');
    ciudad.insertVertice('h');
    ciudad.insertVertice('i');
    ciudad.insertVertice('j');
    ciudad.insertVertice('k');
}

void insertar_aristas(){
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('b'), 20);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('f'), 47);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('e'), 78);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('d'), 99);

  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('a'), 20);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('c'), 31);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('e'), 55);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('f'), 27);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('g'), 16);

  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('b'), 31);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('f'), 4);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('g'), 1);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('h'), 75);

  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('a'), 99);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('e'), 28);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('i'), 10);

  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('a'), 78);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('b'), 55);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('d'), 23);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('f'), 9);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('j'), 21);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('i'), 18);

  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('a'), 47);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('b'), 27);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('c'), 4);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('g'), 29);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('k'), 12);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('j'), 7);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('i'), 90);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('e'), 9);

  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('b'), 16);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('c'), 1);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('f'), 29);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('h'), 80);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('j'), 18);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('k'), 37);

  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('c'), 75);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('g'), 80);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('k'), 42);

  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('d'), 10);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('e'), 18);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('f'), 90);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('j'), 25);

  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('i'), 25);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('e'), 21);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('f'), 7);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('g'), 18);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('k'), 50);

  ciudad.insertArista(ciudad.getVertice('k'), ciudad.getVertice('i'), 50);
  ciudad.insertArista(ciudad.getVertice('k'), ciudad.getVertice('f'), 12);
  ciudad.insertArista(ciudad.getVertice('k'), ciudad.getVertice('g'), 37);
  ciudad.insertArista(ciudad.getVertice('k'), ciudad.getVertice('h'), 42);
}


int main(){
  ciudad.inicializa();
  insertar_vertices();
  insertar_aristas();
  ciudad.listadeAdyacencia();
  return 0;
}
