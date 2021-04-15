#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define filas 15

int **crearMatriz(int f, int c);
void llenarMatriz(int c, int **mt);
void mostrarMatriz(int c,int **mt);

int main(){
    int columnas;
    int **matriz;

    columnas = rand() % (15 - 5 + 1);
    printf("\nEl numero de columnas elegido es: %i\n\n", columnas);

    matriz = crearMatriz(filas,columnas);
    llenarMatriz(columnas,matriz);
    mostrarMatriz(columnas,matriz);
    system("pause");
    return 0;
}

int **crearMatriz(int f, int c){
    int **mt = (int**)malloc(f*sizeof(int));
   // mt = calloc(f,sizeof(int *));
    if (mt==NULL)
    {
        printf("No se pudo reservar memoria para las filas");
    }
    
    for (int i = 0; i < f; i++)
    {
        mt[i] = calloc(c,sizeof(int));
        if (mt[i]==NULL)
        {
            printf("No se pudo reservar memoria para las columnas");
        }
    }
    return mt;
}

void llenarMatriz(int c, int **mt){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mt[i][j]= rand() % (999 - 100 +1);            
        }
    }
}


void mostrarMatriz(int c,int **mt){
    printf("\n\nEl contenido de la matriz es:\n\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mt[i][j]);
        }
        printf("\n");
    }
    

    for (int i = 0; i < filas; i++)
    {
        free(mt[i]);
    }
    free(mt);
    
}