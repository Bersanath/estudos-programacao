/* Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo: 
 
9 8 7 6 5 4 3 2 1 0 
0 1 2 3 4 5 6 7 8 9

Data 30/10/2025 -> 37ª Dia
*/

#include <stdio.h>

int main(){

    int vetor[10];

    for(int i = 0; i < 10; i++){

        vetor[i] = 9 - i;
    }
    for(int i = 0; i < 10; i++){

        printf("%d ",vetor[i]);
    }
    return 0;
}