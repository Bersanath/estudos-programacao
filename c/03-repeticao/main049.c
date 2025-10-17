/*Crie um programa que leia 6 números inteiros e no final mostre quantos deles 
são pares e quantos são ímpares.

Data 17/10/2025 -> 25ª Dia
*/

#include <stdio.h>


int main() {

    int impares = 0,pares = 0,num;

    for(int i = 1; i <= 6; i++) {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num % 2 == 0) {
            pares += 1;
        }
        else {
            impares += 1;
        }
    }
    printf("Sao %d numeros Pares!\n",pares);
    printf("Sao %d numeros Impares!\n",impares);
    return 0;
}