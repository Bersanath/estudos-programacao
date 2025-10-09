/*Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
- O primeiro valor é o maior
- O segundo valor é o maior
- Não existe valor maior, os dois são iguais

Data 04/10/2025 -> 13ª Dia
*/
#include <stdio.h>

int main() {

    int num1;
    int num2;

    scanf("%d %d",&num1,&num2);

    if(num1 > num2) {
        printf("O %d e maior que o %d",num1,num2);
    }
    else if(num2 > num1) {
        printf("O %d e maior que o %d",num2,num1);
    }
    else {
        printf("Ambos sao iguais!");
    }
    return 0;
}