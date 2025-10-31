/*Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 15 posições com os primeiros 
elementos da sequência de Fibonacci: 
 
1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 


Data 31/10/2025 -> 38ª Dia
*/

#include <stdio.h>

int main(){

    int anterior = 1;
    int atual = 1;
    int proximo;
    int vetor[15];

    printf("%d %d ", anterior, atual);

    for(int i = 0; i < 15; i++){

        proximo = anterior + atual;
        vetor[i] = proximo;
        printf("%d ",vetor[i]);
        anterior = atual;
        atual = proximo;
    }
    return 0;
}