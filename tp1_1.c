#include <stdio.h>

void main(){
    int *puntero, variable = 3;
    puntero = &variable;


    printf("Contenido del puntero: %d \n", *puntero);
    printf("Dirección de memoria almacenada por el puntero: %p \n", puntero);
    printf("Dirección de memoria de la variable: %p\n", &variable);
    printf("Dirección de memoria del puntero: %p\n", &puntero);
    printf("Tamaño de memoria utilizado por la variable: %d bits\n", sizeof(variable));
}