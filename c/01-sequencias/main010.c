/*Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2metros quadrados.

Data 26/09/2025 -> 5ª Dia
*/

#include <stdio.h>

int main() {

    float largura;
    float altura;
    float area,quantidade;

    scanf("%f %f",&largura,&altura);

    area = largura * altura;
    quantidade = area / 2;

    printf("A area a ser pintada e de: %f",area);
    printf("A quantidade de tinta necessaria para o servico e: %f",quantidade);
    return 0;
}