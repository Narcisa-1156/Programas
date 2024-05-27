#include<stdio.h>
int entero, i;
char caracter;
float flotante;
int main(){
    printf("Hola!! \nBienvenido a mi programa\n");
    printf("Puedes ingresar 3 variables con tres tipos de datos\n");
    printf("Ingresa un caracter:\n");
    scanf("%c", &caracter);
    printf("Ingresa un decimal:\n");
    scanf("%f", &flotante);
    printf("Ingresa un entero:\n");
    scanf("%d", &entero);
    printf("==================================================================\n");
    printf("Los valores ingresados son los soguientes:\n");
    printf("char = %c\n", caracter);
    printf("float = %f\n", flotante);
    printf("entero = %d\n", entero);

    return 0;
}