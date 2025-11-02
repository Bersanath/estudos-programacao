/* Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. 
No final, mostre quais são os números pares que foram digitados e em que 
posições eles estão armazenados.

Data 02/11/2025 -> 40ª Dia
*/


#include <stdio.h>


int main(){

    int vetor[10];
   
    for(int i = 0; i < 10; i++){

        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);

    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("Numero %d na posicao %d\n", vetor[i], i);
        }
    }
    return 0;
    
}