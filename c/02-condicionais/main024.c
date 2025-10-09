/*Faça um algoritmo que pergunte a distância que um passageiro deseja
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para
viagens até 200Km e R$0.45 para viagens mais longas.

Data 03/10/2025 -> 12ª Dia
*/

#include <stdio.h>

int main() {

    float distancia,preco_passagem;

    scanf("%f",&distancia);

    if(distancia <= 200) {

        preco_passagem = distancia * 0.50;
        printf("Por estar dentro do limite de 200km, você vai pagar R$%.2f",preco_passagem);
    }
    else {

        preco_passagem = distancia * 0.45;
        printf("Por ultrapassar os 200km, você vai pagar R$%.2f");
    }
    return 0;
}