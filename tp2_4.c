#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

 typedef struct  compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} cpu;

void crearPc(cpu *pc, char tipos[6][10]);
void MostrarPc(cpu *pc);


int main(){
    char tipos[6][10]={ "Intel",
                        "AMD",
                        "Celeron",
                        "Athlon",
                        "Core",
                        "Pentium"};
    int n;
    cpu computadora;

    crearPc(&computadora,tipos[6][10]);
    MostrarPc(&computadora);

    system("pause");
    return 0;
}

void crearPc(cpu *pc, char tipos[6][10]){
    int cant = rand() % (6-1+1);

    pc->anio = rand() % (2017 - 2000 + 1);
    pc->cantidad = rand() % (4 - 1 + 1);
    pc->velocidad = rand() % (3 - 1 + 1);
    pc->tipo_cpu = tipos[cant];

}


void MostrarPc(cpu *pc){
    printf("Los datos de LA pc:\n");
    printf("Velocidad: %d\n",pc->velocidad);
    printf("Cantidad de nucleos: %d\n", pc->cantidad);
    printf("anio: %d\n", pc->anio);
    printf("procesador: %s\n", pc->tipo_cpu);
}



