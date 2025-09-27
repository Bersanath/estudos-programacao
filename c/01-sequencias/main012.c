/*Crie um programa que leia o preço de um produto, calcule e mostre o seu
PREÇO PROMOCIONAL, com 5% de desconto.

Data 27/09/2025 -> 6ª Dia
*/

#include <stdio.h>

int main() {

    float produto;
    float preco;
    float preco_promocional;

    printf("Qual e o preco do Produto: ");
    scanf("%f",&produto);

    preco = produto * 0.05;
    preco_promocional = produto - preco;

    printf("O preco Promocional com desconto de %f e: %f",preco,preco_promocional);

    return 0;
}