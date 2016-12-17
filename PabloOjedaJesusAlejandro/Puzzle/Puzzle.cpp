#include<Puzzle.h>
#include<stdio.h>
#include<stdlib.h>

void Puzzle::inicializa(){
  reservar_memoria();
  rellenar();
  posicionVacio();
}

void Puzzle::rellenar(){
  tablero[0][0] = 1;
  tablero[0][1] = 2;
  tablero[0][2] = 3;
  tablero[1][0] = 0;
  tablero[1][1] = 4;
  tablero[1][2] = 8;
  tablero[2][0] = 7;
  tablero[2][1] = 5;
  tablero[2][2] = 6;

  /*
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
	     tablero[i][j] = 0;
		}
	}*/
}


void Puzzle::reservar_memoria(){
	tablero = (int **)malloc(3*sizeof(int**));
	for(int i = 0; i<3; i++)
		tablero[i] = (int*)malloc(3*sizeof(int));
}

void Puzzle::posicionVacio(){
  int i, j;
  for(i = 0; i < 3; i++){
    for (j = 0; j < 3; j++) {
      if(tablero[i][j] == 0){
          x=j;
          y=i;
      }
    }
  }
}

bool Puzzle::puedeIralaDerecha(){
  if((x+1) < 3){
    return true;
  }
  return false;
}

bool Puzzle::puedeIraAbajo(){
  if((y+1) < 3)
    return true;
  return false;
}

bool Puzzle::puedeIralaIzquierda(){
  if((x-1) >= 0)
    return true;
  return false;
}

bool Puzzle::puedeIraArriba(){
  if((y-1) >= 0)
    return true;
  return false;
}

void Puzzle::iralaDerecha(){
  int aux = tablero[y][x+1];
  tablero[y][x+1] = tablero[y][x];
  tablero[y][x] = aux;;
  x = x+1;
}

void Puzzle::iraAbajo(){
  int aux = tablero[y+1][x];
  tablero[y+1][x] = tablero[y][x];
  tablero[y][x] = aux;
  y = y+1;
}

void Puzzle::iralaIzquierda(){
  int aux = tablero[y][x-1];
  tablero[y][x-1] = tablero[y][x];
  tablero[y][x] = aux;
  x = x-1;
}

void Puzzle::iraArriba(){
  int aux = tablero[y-1][x];
  tablero[y-1][x] = tablero[y][x];
  tablero[y][x] = aux;
  y = y-1;
}

int Puzzle::getXVacio(){
  return x;
}

int Puzzle::getYVacio(){
  return y;
}

bool Puzzle::esSolucion(){
  int i, j;
  int valor = 1;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(tablero[i][j] != valor){
        break;
      }else{
        valor++;
      }
    }
  }

  if(valor == 9){
    return true;
  }
  return false;
}

void Puzzle::imprime_matriz(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", tablero[i][j]);
		}
		printf("\n");
	}
  printf("\n");
}
