/* Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 
8 + 10 + 12 + 14 + ... + 98 + 100.

Data 15/10/2025 -> 23ª Dia
*/

#include <stdio.h>


int main() {

    int soma = 0;

    for(int i = 6; i <= 100; i+=2) {

        soma += i;
    }
    printf("%d",soma);
    return 0;
}