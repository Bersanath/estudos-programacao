/*Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.

Data 26/09/2025 -> 5ª Dia
*/

#include <stdio.h>

int main() {

    float dinheiro;
    float dolar;

    scanf("%f",&dinheiro);

    dolar = dinheiro / 3.45;

    printf("Com R$%f posso comprar US$%.2f",dinheiro,dolar);
    return 0;
}