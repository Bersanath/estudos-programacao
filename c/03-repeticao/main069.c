/*Desenvolva um programa que leia o primeiro termo e a razão de uma 
PA (Progressão Aritmética), mostrando na tela os 10 primeiros elementos da PA e 
a soma entre todos os valores da sequência. 

Data 28/10/2025 -> 35ª Dia
*/

#include <stdio.h>

int main(){

    int primeiro_termo;
    int razao;
    int soma = 0;

    printf("Digite o Primeiro Termo: ");
    scanf("%d",&primeiro_termo);

    printf("Digite a razao: ");
    scanf("%d",&razao);

    for(int i = 0; i < 10; i++){

        soma += primeiro_termo;
        primeiro_termo += razao;
    }
    printf("Soma de todos os valores: %d",soma);
    return 0;
}