#include<stdio.h>

int main() {
    //Declaracion de variables
    int entero;
    char caracter;
    float flotante, suma;
    //Mensaje de vienvenida
    printf("Hola!! \nBienvenido a mi programa\n");
    printf("Puedes ingresar 3 variables con tres tipos de datos\n");
    //Ingreso de variables
    printf("Ingresa un caracter:\n");
    scanf(" %c", &caracter); 

    printf("Ingresa un decimal:\n");
    scanf(" %f", &flotante);

    printf("Ingresa un entero:\n");
    scanf(" %d", &entero);
    //Realizacion de una operacion basica
    printf("==================================================================\n");
    printf("Los valores numericos ingresados permiten la siguiente suma:\n");
    suma = flotante + entero;
    printf("%f\n", suma);
    return 0;
}
