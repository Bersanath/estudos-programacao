/* Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou 
ÍMPAR.

Data 01/10/2025 -> 10ª Dia
*/

#include <stdio.h>

int main() {

    int num;

    scanf("%d",&num);

    if(num % 2 == 0) {

        printf("O numero %d e PAR",num);
    }
    else {

        printf("O numero %d e IMPAR",num);
    }
    return 0;
}