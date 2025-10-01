/*Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade
dela e depois mostre se ela pode ou não votar.

Data 30/09/2025 -> 9ª Dia*/


#include <stdio.h>

int main() {

    int ano;
    int idade;

    scanf("%d",&ano);

    idade = 2025 - ano;

    if(idade >= 18) {

        printf("Voce tem: %d anos de idade entao ja podes voltar",idade);
    }
    else {
        printf("Voce tem: %d anos de idade entao ainda nao podes votar",idade);
    }
    return 0;
}