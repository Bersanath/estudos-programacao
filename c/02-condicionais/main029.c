/*Desenvolva um programa que leia o nome de um funcionário, seu salário,
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
acordo com a tabela a seguir:
- Até 3 anos de empresa: aumento de 3%
- entre 3 e 10 anos: aumento de 12.5%
- 10 anos ou mais: aumento de 20%

Data 06/10/2025 -> 15ª Dia
*/

#include <stdio.h>

int main() {

    char nome[100];
    float salario;
    int ano;
    float reajuste;
    float percentual;
    float novo_salario;

    printf("=== SISTEMA DE REAJUSTE SALARIAL ===");
    
    printf("NOME DO FUNCIONARIO: ");
    fgets(nome, 100, stdin);

    printf("SALARIO DO FUNCIONARIO: ");
    scanf("%f",&salario);

    printf("ANO DE TRABALHO NA EMPRESA: ");
    scanf("%d",&ano);

    if(ano < 3) {

        percentual = 3.0;
        reajuste = salario * (percentual / 100);
        novo_salario = salario + reajuste;
    }
    else if(ano < 10) {

        percentual = 12.5;
        reajuste = salario * (percentual / 100);
        novo_salario = salario + reajuste;
    }
    else {

        percentual = 20;
        reajuste = salario * (percentual / 100);
        novo_salario = salario + reajuste;
    }
    printf("\n--- RESUMO DO REAJUSTE ---");
    printf("FUNCIONARIO: %s",nome);
    printf("TEMPO DE EMPRESA: %d ANOS",ano);
    printf("SALARIO ANTERIOR: R$ %.2f",salario);
    printf("PERCENTUAL DE AUMENTO: %.2f PORCENTO",percentual);
    printf("VALOR DO AUMENTO: R$ %.2f",reajuste),
    printf("NOVO SALARIO: R$ %.2f",novo_salario);
    printf("------------------------------");
    return 0;
}