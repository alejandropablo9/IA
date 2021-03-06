#include<stdio.h>
#include <TorresHanoi.cpp>

bool solucion = false;

void busquedaporprofundidad(TorresHanoi th, int profundidad, int limite){
  if(!solucion){
    printf("profundida = %d\n", profundidad);
    th.verTorres();
    if(th.esSolucion()){
      printf("Solucion Encontrada :)\n");
      solucion = true;
    }else if(profundidad == limite){
      return;
    }
    if(th.verificasiMovimientodeTorreInicialaObjetivo()){
      th.MoverdeTorre_inicialaTorre_objetivo();
      busquedaporprofundidad(th, profundidad + 1, limite);
    }
    if(th.verificasiMovimientodeTorreInicialaAuxiliar()){
      th.MoverdeTorre_inicialaTorre_auxiliar();
      busquedaporprofundidad(th, profundidad + 1, limite);
    }
    if(th.verificasiMovimientodeTorreObjetivoaAuxiliar()){
      th.MoverdeTorre_objetivoaTorre_auxiliar();
      busquedaporprofundidad(th, profundidad + 1, limite);
    }
    if(th.verificasiMovimientodeTorreAuxiliaraInicial()){
      th.MoverdeTorre_auxiliaraTorre_inicial();
      busquedaporprofundidad(th, profundidad + 1, limite);
    }
    if(th.verificasiMovimientodeTorreObjetivoaInicial()){
      th.MoverdeTorre_objetivoaTorre_inicial();
      busquedaporprofundidad(th, profundidad + 1, limite);
    }
    if(th.verificasiMovimientodeTorreAuxiliaraObjetivo()){
      th.MoverdeTorre_auxiliaraTorre_objetivo();
      busquedaporprofundidad(th, profundidad + 1, limite);
    }
  }
}

int main(){
  TorresHanoi th;
  int discos;
  int prof_lim;
  printf("ingrese el numero de discos: ");
  scanf("%d", &discos);
  printf("ingrese la profundidad: ");
  scanf("%d", &prof_lim);
  th.inicializa(discos);
  /*th.MoverdeTorre_inicialaTorre_auxiliar();
  th.MoverdeTorre_inicialaTorre_objetivo();
  th.MoverdeTorre_auxiliaraTorre_objetivo();
  if(th.esSolucion())
    printf("si\n");
  else
    printf("no\n");*/
  busquedaporprofundidad(th, 0, prof_lim);
  return 0;
}
