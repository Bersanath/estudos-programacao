/*Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um 
número (chave) e seu programa deve mostrar em que posições essa chave foi 
encontrada. Mostre também quantas vezes a chave foi sorteada.

Data 02/11/2025 -> 40ª Dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int posicoes[30];
    int vetor[30];
    int cont = 0;

    srand(time(NULL));
    for(int i = 0; i < 30; i++){

        vetor[i] = rand() % 15 + 1;
    }
    int chave;
    printf("Digite a chave: ");
    scanf("%d",&chave);

    for(int i = 0; i < 30; i++){

        if(vetor[i] == chave){

            posicoes[cont] = i;
            cont ++;
        }
    }
    if(cont > 0) {
        printf("Chave %d encontrada %d vezes nas posicoes: ", chave, cont);
        for(int i = 0; i < cont; i++) {
            printf("%d ", posicoes[i]);
        }
    } else {
        printf("Chave %d nao encontrada", chave);
    }
    printf("\nVetor sorteado: ");
    for(int i = 0; i < 30; i++){

        printf("%d ",vetor[i]);
    }
    return 0;
}