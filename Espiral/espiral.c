#include <stdio.h>
#include <stdlib.h>

void reservar_memoria();
void rellenar_matriz();
void imprime_matriz();

int **matriz;
int n;
int i, j;

int dimension;
int valores;

int main(int argc, char *argv[]) {
	printf("Tamanio de la matriz: ");
	scanf("%d", &n);

	dimension = n;
    valores = n * n;
	reservar_memoria();
	rellenar_matriz();
	imprime_matriz();


	return 0;
}

void reservar_memoria(){
	matriz = (int **)malloc(n*sizeof(int**));
	for(i = 0; i<n; i++)
		matriz[i] = (int*)malloc(n*sizeof(int));
}

void imprime_matriz(){
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

void rellenar_matriz(){
	int j, vuelta = 0, i, val = 1;
        while (val <= valores) {

            for (i = vuelta, j = vuelta; val <= valores && i < dimension - 1 - vuelta; i++) {
                matriz[i][j] = val;
                val++;
            }

            for (i = dimension - 1 - vuelta, j = vuelta; val <= valores && j < dimension - 1 - vuelta; j++) {
                matriz[i][j] = val;
                val++;
            }

            for (i = dimension - 1 - vuelta, j = dimension - 1 - vuelta; val <= valores && i > vuelta; i--) {
                matriz[i][j] = val;
                val++;
            } 

            for (i = vuelta, j = dimension - 1 - vuelta; val <= valores && j > vuelta; j--) {
                matriz[i][j] = val;
                val++;
            }

    	if (dimension % 2 != 0 && val == valores) {
            i = j = dimension / 2;
        	matriz[j][i] = val;
    	    val++;
        }
        vuelta++;
    }
}
