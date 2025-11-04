/* [DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números 
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os 
números gerados e depois coloque o vetor em ordem crescente, mostrando no final 
os valores ordenados.

Data 04/11/2025 -> 42ª Dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int vetor[20];


    srand(time(NULL));
    for(int i = 0; i < 20; i++){

        vetor[i] = rand() % 100; 

    }
    printf("Forma nao ordenada: ");
    for(int i = 0; i < 20; i++){

        printf("%d ",vetor[i]);
    }
    for(int i = 0; i < 20 - 1; i++){
        for(int j = 0; j < 20-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
    printf("\nForma ordenada: ");
    for(int i = 0; i < 20; i++){

        printf("%d ",vetor[i]);
    }
    return 0;
}