/* Faça um programa que mostre os 10 primeiros elementos da Sequência 
de Fibonacci: 
1 1 2 3 5 8 13 21...

Data 28/10/2025 -> 35ª Dia
*/

#include <stdio.h>


int main(){

    int anterior = 1;
    int proximo;
    int atual = 1;

    for(int i = 0; i < 10; i++){

        proximo = anterior + atual;
        printf("%d ",proximo);
        anterior = atual;
        atual = proximo;
    }
    return 0;
}