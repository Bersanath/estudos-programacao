/*Crie um programa que preencha automaticamente um vetor numérico com 7 
números gerados aleatoriamente pelo computador e depois mostre os valores 
gerados na tela.

Data 31/10/2025 -> 38ª Dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int vetor[7];

    srand(time(NULL));

    for(int i = 0; i < 7; i++){

        vetor[i] = rand() % 7;
    }
    for(int i = 0; i < 7; i++){

        printf("%d ",vetor[i]);
    }
    return 0;

}