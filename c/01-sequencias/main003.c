/*Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.

Data 23/09/2025 -> 2ª Dia
*/

#include <stdio.h>

int main() {

    char nome[100];
    float salario;

    printf("Nome do Funcionario: ");
    fgets(nome, 100, stdin);

    printf("Salario: ");
    scanf("%f",&salario);

    printf("O funcionario %s tem um salario de %0.fkz",nome,salario);
    return 0;

}