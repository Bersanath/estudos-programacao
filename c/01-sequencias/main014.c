/*A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.

Data 28/09/2025 -> 7ª Dia
*/

#include <stdio.h>

int main() {

    float quantidade_km;
    int quantidade_dia,dia;
    float km,preco_total;

    scanf("%f %d",&quantidade_km,&quantidade_dia);

    km = quantidade_km * 0.20;
    dia = quantidade_dia * 90;
    
    preco_total = dia + km;

    printf("O total a se pagar e de: %.2f",preco_total);
    return 0;
}