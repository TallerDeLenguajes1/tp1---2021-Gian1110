#include <stdio.h>

float cuadrado(float base);
void cuadradoVoid(float *base);
void direccionContenido(float recibevar);
void invertir(float *orgien, float *destino);
void orden(float *primero, float *segundo);

int main(){
    float dato1=5.2, dato2=10.3;
    float *puntero1, *puntero2;

    puntero1 = &dato1;
    puntero2 = &dato2;

    printf("\nVariable: %.2f  su cuadrado: %.2f\n", dato1, cuadrado(dato1));
    printf("el valor de puntero es: %f",*puntero1);
    printf("\nVariable: %.2f ", dato1);
    cuadradoVoid(puntero1);
    printf("su cuadrado: %.2f\n",*puntero1);
    direccionContenido(dato1);
    printf("Valores originales: dato1 = %.2f, dato2 = %.2f\n", dato1, dato2);
    invertir(puntero1,puntero2);
    printf("Valores invertidos: dato1 = %.2f, dato2 = %.2f\n", dato1, dato2);
    orden(puntero1, puntero2);
    printf("Valores ordenados de menor a mayor: %.2f, %.2f\n", dato1, dato2);
    return 0;
}

float cuadrado(float base){
    return base*base;
};
void cuadradoVoid(float *base){
    *base = *base**base;
};
void direccionContenido(float recibevar){
    printf("Dirección de memoria de la variable: %p\n", &recibevar);
    printf("Contenido de la variable: %.2f\n\n", recibevar);

};
void invertir(float *origen, float *destino){
    float aux;
    aux= *origen;
    *origen = *destino;
    *destino = aux;
};

void orden(float *primero, float *segundo){
    if(*segundo < *primero){
        invertir(primero,segundo);
    }
};