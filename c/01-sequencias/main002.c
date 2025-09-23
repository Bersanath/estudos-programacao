/*Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas
para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!

Data: 22/09/2025 -> 1ª Dia
*/

#include <stdio.h>

int main() {
    char nome;

    scanf("%s", &nome);

    printf("Ola %s, e um prazer te conhecer!");
    return 0;
}