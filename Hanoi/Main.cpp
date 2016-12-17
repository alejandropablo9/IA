#include<stdio.h>
#include <TorresHanoi.cpp>


bool solucion = false;

void busquedaporprofundidad(TorresHanoi th, int profundidad){
  if(!solucion){
    printf("profundida = %d\n", profundidad);
    th.verTorres();
    if(th.esSolucion()){
      printf("Solucion Encontrada :)\n");
      solucion = true;
    }else if(profundidad == 9){
      return;
    }
    if(th.verificasiMovimientodeTorreInicialaObjetivo()){
      th.MoverdeTorre_inicialaTorre_objetivo();
      busquedaporprofundidad(th, profundidad + 1);
    }
    if(th.verificasiMovimientodeTorreInicialaAuxiliar()){
      th.MoverdeTorre_inicialaTorre_auxiliar();
      busquedaporprofundidad(th, profundidad + 1);
    }
    if(th.verificasiMovimientodeTorreObjetivoaAuxiliar()){
      th.MoverdeTorre_objetivoaTorre_auxiliar();
      busquedaporprofundidad(th, profundidad + 1);
    }
    if(th.verificasiMovimientodeTorreAuxiliaraInicial()){
      th.MoverdeTorre_auxiliaraTorre_inicial();
      busquedaporprofundidad(th, profundidad + 1);
    }
    if(th.verificasiMovimientodeTorreObjetivoaInicial()){
      th.MoverdeTorre_objetivoaTorre_inicial();
      busquedaporprofundidad(th, profundidad + 1);
    }
    if(th.verificasiMovimientodeTorreAuxiliaraObjetivo()){
      th.MoverdeTorre_auxiliaraTorre_objetivo();
      busquedaporprofundidad(th, profundidad + 1);
    }
  }
  return;
}

int main(){
  TorresHanoi th;
  th.inicializa(3);
  busquedaporprofundidad(th, 0);
  return 0;
}
