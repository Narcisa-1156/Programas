#include <stdio.h>
int main(){
    float suma, resta, mult, division;
    float num1 = 15.57, num2 = 89.3;
    printf("Calculadora: + || - || / || *\n");
    suma = num1 + num2;
    printf("La suma es: %f\n", suma);
    resta = num1 - num2;
    printf("La resta es: %f\n", resta);
    mult = num1 * num2; 
    printf("La multiplicacion es: %f\n", mult);
    division = num1 / num2;
    printf("La division: %f\n", division);


    return 0;
}