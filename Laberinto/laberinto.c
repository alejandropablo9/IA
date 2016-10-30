#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int laberinto[100][100];

//para leer el archivo
int f,c; // filas y columnas del laberinto
int fp,cp; // coordenadas del jugador
int fs,cs; // coordenadas de la salida o meta

void imprime_matriz(){
	int i, j;
	for(i = 0; i < f; i++){
		for(j = 0; j < c; j++){
			printf("%d\t", laberinto[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

struct Coordenadas{
	int x;
	int y;
} r = {-1, -1};

void buscar_camino(int x, int y){
	if((laberinto[x][y] == 0) && 
		((x < f) && (x >= 0)) && 
		((y < c) && (y >= 0)) &&
		(r.x == -1)){
		//printf("%d,%d\n", x, y);//debug
		laberinto[x][y] = 2;
		buscar_camino(x+1, y); //buscar abajo
		buscar_camino(x, y+1); //busca derecha
		buscar_camino(x-1, y); //busca arriba
		buscar_camino(x, y-1); //busca izquierda
	}
	
	if(laberinto[x][y] == 3 &&
		((r.x == -1) && r.y == -1)){
		printf("salida encontrada\n");		
		r.x = x;
		r.y = y;	
	}
}

void leerArchivo() {
    int maxCol;
    FILE *archivo;
    char caracter;
    int codigo;
    bool flag=true; // Sirve para que aumente el numero de columnas solo hasta que encuentre le primer salto de linea
               // suponiendo que el archivo tiene todas las lineas de igual numero de caracteres
 
        archivo=fopen("Laberinto.txt","rt"); // abrimos el archivo "laberinto.txt" en modo lectura de texto("rt"
        if (archivo==NULL) { // En caso de que el archivo no exista o que este mal el nombre
           printf("Error en lectura de archivo\n");
           exit (EXIT_FAILURE); // Terminacion del programa por falla
           }
 
        while(!feof(archivo)) { // Este ciclo sirve para dimensionar nuestra matriz
                caracter=fgetc(archivo);
                codigo = caracter; // obtenemos el codigo Ascii de el caracter
 
                if (codigo==10) { // codigo del salto de linea
                   f++; // Si encontramos un enter añadimos una fila mas a nuestra matriz
                   if (flag) {maxCol=c; flag=false;} // solo lo hacemos una vez
                   c=0;
                } else {
                       laberinto[f][c]=codigo-48;
                       if (laberinto[f][c]==2){fp=f;cp=c; laberinto[f][c]=0;}
                       if (laberinto[f][c]==3){fs=f;cs=c;}
                       c++ ;// añadimos una columna mas a nuestra matriz
                }
        }
        c=maxCol; // si no ponemos esto la matriz queda de una columna
        fclose(archivo);
        //printf ("%d filas, %d columnas",f,maxCol); // para debug
}

int main(){
	leerArchivo();
	//printf("%d %d", f, c);
	imprime_matriz();
	buscar_camino(fp, cp);
	imprime_matriz();	
	printf("salida: %d, %d\n", r.x, r.y);
	return 0;
}
