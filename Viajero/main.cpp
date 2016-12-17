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
}

void insertar_aristas(){
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('b'), 20);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('c'), 15);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('d'), 30);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('e'), 25);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('f'), 40);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('g'), 30);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('h'), 60);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('i'), 50);
  ciudad.insertArista(ciudad.getVertice('a'), ciudad.getVertice('j'), 95);

  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('a'), 20);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('c'), 30);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('d'), 20);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('e'), 15);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('f'), 15);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('g'), 20);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('h'), 40);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('i'), 40);
  ciudad.insertArista(ciudad.getVertice('b'), ciudad.getVertice('j'), 30);

  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('a'), 15);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('b'), 30);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('d'), 25);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('e'), 30);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('f'), 20);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('g'), 30);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('h'), 40);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('i'), 45);
  ciudad.insertArista(ciudad.getVertice('c'), ciudad.getVertice('j'), 50);

  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('a'), 30);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('b'), 20);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('c'), 25);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('e'), 20);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('f'), 30);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('g'), 10);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('h'), 50);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('i'), 40);
  ciudad.insertArista(ciudad.getVertice('d'), ciudad.getVertice('j'), 35);

  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('a'), 25);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('b'), 15);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('c'), 30);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('d'), 20);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('f'), 10);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('g'), 20);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('h'), 20);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('i'), 30);
  ciudad.insertArista(ciudad.getVertice('e'), ciudad.getVertice('j'), 40);

  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('a'), 40);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('b'), 15);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('c'), 20);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('d'), 30);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('e'), 10);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('g'), 20);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('h'), 30);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('i'), 20);
  ciudad.insertArista(ciudad.getVertice('f'), ciudad.getVertice('j'), 30);

  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('a'), 30);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('b'), 20);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('c'), 30);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('d'), 10);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('e'), 20);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('f'), 20);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('h'), 25);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('i'), 40);
  ciudad.insertArista(ciudad.getVertice('g'), ciudad.getVertice('j'), 30);

  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('a'), 60);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('b'), 40);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('c'), 40);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('d'), 50);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('e'), 20);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('f'), 30);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('g'), 25);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('i'), 30);
  ciudad.insertArista(ciudad.getVertice('h'), ciudad.getVertice('j'), 15);

  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('a'), 60);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('b'), 40);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('c'), 40);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('d'), 50);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('e'), 20);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('f'), 30);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('g'), 25);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('h'), 30);
  ciudad.insertArista(ciudad.getVertice('i'), ciudad.getVertice('j'), 15);

  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('a'), 60);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('b'), 40);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('c'), 40);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('d'), 50);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('e'), 20);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('f'), 30);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('g'), 25);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('h'), 30);
  ciudad.insertArista(ciudad.getVertice('j'), ciudad.getVertice('i'), 15);

}


int main(){
  ciudad.inicializa();
  insertar_vertices();
  insertar_aristas();
  ciudad.listadeAdyacencia();
  return 0;
}
