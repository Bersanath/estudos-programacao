/* Escreva um programa que leia 15 números e guarde-os em um vetor. No final, 
mostre o vetor inteiro na tela e em seguida mostre em que posições foram 
digitados valores que são múltiplos de 10.

Data 01/11/2025 -> 39ª Dia
*/

#include <stdio.h>

int main(){

    int vetor[15];

    for(int i = 0; i < 15; i++){

        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i < 15; i++){

        printf("%d ",vetor[i]);
    }
    printf("\nPosicoes com multiplos de 10: ");
    for(int i = 0; i < 15; i++) {
        if(vetor[i] % 10 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}