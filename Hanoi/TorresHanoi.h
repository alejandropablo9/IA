#ifndef TORRESHANOI_H
#define TORRESHANOI_H
#include <iostream>
#include <stack>
using namespace std;

class TorresHanoi{
    stack<int> torre_inicial;
    stack<int> torre_auxiliar;
    stack<int> torre_objetivo;
    int discos;

  public:
    void inicializa(int dis);
    //verifica si las torres estan vacias
    bool estaVaciaTorre_inicial();
    bool estaVaciaTorre_auxiliar();
    bool estaVaciaTorre_objetivo();
    //tamaño de las torres
    int alturadeTorre_inicial();
		int alturadeTorre_auxiliar();
		int alturadeTorre_objetivo();
    //Elimina la cima de la torre
    int sacardeTorre_inicial();
		int sacardeTorre_auxiliar();
		int sacardeTorre_objetivo();
    //pone en la cima de una torre
    void ponerEnTorre_inicial(int value);
		void ponerEnTorre_auxiliar(int value);
		void ponerEnTorre_objetivo(int value);
    //revisa la cima de la pila
    int verCimaTorre_inicial();
		int verCimaTorre_auxiliar();
		int verCimaTorre_objetivo();
    //verifica si un moviemiento es posible de una torre a otra
    bool verificasiMovimientodeTorreInicialaAuxiliar();
    bool verificasiMovimientodeTorreInicialaObjetivo();
    bool verificasiMovimientodeTorreAuxiliaraInicial();
    bool verificasiMovimientodeTorreAuxiliaraObjetivo();
    bool verificasiMovimientodeTorreObjetivoaInicial();
    bool verificasiMovimientodeTorreObjetivoaAuxiliar();
    //realiza moviemiento de discos de una torre a otra
    void MoverdeTorre_inicialaTorre_auxiliar();
		void MoverdeTorre_inicialaTorre_objetivo();
		void MoverdeTorre_auxiliaraTorre_inicial();
		void MoverdeTorre_auxiliaraTorre_objetivo();
		void MoverdeTorre_objetivoaTorre_inicial();
		void MoverdeTorre_objetivoaTorre_auxiliar();

    bool esSolucion();
    void verTorres();
};
#endif
