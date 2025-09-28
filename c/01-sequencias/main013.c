/*Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
seu novo salário, com 15% de aumento.

Data 28/09/2025 -> 7ª Dia
*/

#include <stdio.h>

int main() {

    float salario;
    float aumento;
    float novo_salario;

    scanf("%f",&salario);

    aumento = salario * 0.15;
    novo_salario = salario + aumento;

    printf("O salario do funcionario era %f com o aumento de 15 porcento agora e: %f",salario,novo_salario);
    return 0;
}