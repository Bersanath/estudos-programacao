/*Faça um programa que leia 7 números inteiros e no final mostre o somatório 
entre eles.


Data 16/10/2025 -> 24ª Dia
*/

#include <stdio.h>

int main() {

    int somatorio = 0,num;

    for(int i = 1; i <= 7; i++) {

        printf("Digite um numero: ");
        scanf("%d",&num);
        somatorio += i;
    }
    printf("%d",somatorio);
    return 0;
}