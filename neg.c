#include<stdio.h>

int cantidad, numero, contador;

int main() {
    printf("Este es un programa para verificar numeros negativos\n");
    printf("Cuantos numeros a verificar desea ingresar ?\n");
    scanf("%d", &cantidad);
    
    int hay_negativos = 0; // Bandera para indicar si hay números negativos

    for (int i = 1; i <= cantidad; i++) {
        printf("Ingrese el numero %d\n", i);
        scanf("%d", &numero);
        
        if (numero < 0) {
            hay_negativos = 1; // Activar la bandera si se encuentra al menos un número negativo
        }      
    }  

    if (hay_negativos) {
        printf("Los numeros negativos son: ");
        for (int i = 1; i <= cantidad; i++) {
            printf("%d ", i);
        }
        printf("\n"); 
    } else {
        printf("No se encontraron numeros negativos.\n");
    }
    
    return 0;
}
