#include<stdio.h>
int cantidad, numero, contador;
int main(){
    printf("Este es un programa para verificar numeros negativos\n");
    printf("Cuantos numeros a verificar desea ingresar ?\n");
    scanf("%d", &cantidad);
    for (int i = 1; i <= cantidad; i++)
    {
        printf("Ingrese el numero %d\n", i);
        scanf("%d", &numero);
        getchar();
        if (numero < 0) {
            printf("%d", numero);
        }      
    }  
    printf("\n"); 
    return 0;
}