/*Faça um programa que possua uma função chamada Potencia(), que vai receber 
dois parâmetros numéricos (base e expoente) e vai calcular o resultado da 
exponenciação. 
Ex: Potencia(5,2) vai calcular 52 = 25  


Data 12/11/2025 -> 50ª Dia
*/


#include <stdio.h>

int Potencia(int base, int expoente) {
    int resultado = 1; 
    for(int i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d^%d = %d\n", base, expoente, Potencia(base, expoente));
    return 0;
}