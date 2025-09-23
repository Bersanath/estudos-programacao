/*Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.

Data 23/09/2025 -> 2ª Dia
*/

#include <stdio.h>

int main() {

    int num1;
    int num2;
    int soma;

    scanf("%d %d",&num1,&num2);

    soma = num1 + num2;

    printf("A soma entre %d + %d = %d",num1,num2,soma);
    return 0;
}