/*Faça um algoritmo que leia um determinado ano e mostre se ele é ou não
BISSEXTO.

Data 02/10/2025 -> 10ª Dia
*/

#include <stdio.h>

int main() {

    int ano;

    scanf("%d",&ano);

    if(ano % 4 == 0 || ano % 400 == 0) {
      printf("O ano %d e BISSEXTO",ano);  
    }
    else {
        printf("O ano %d nao e BISSEXTO",ano);
    }
}