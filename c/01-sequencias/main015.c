/*Crie um programa que leia o número de dias trabalhados em um mês e mostre o 
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 
por hora trabalhada.

Data 29/09/2025 -> 8ª Dia
*/

#include <stdio.h>

int main() {

    int dia;
    int hora;
    float salario;

    scanf("%d",&dia);

    hora = dia * 8;
    salario = hora * 25;

    printf("No mes o funcionario trabalhou %d e ele ganha %f",hora,salario);
    return 0;
}