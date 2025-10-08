/*Escreva um programa para aprovar ou não o empréstimo bancário para a compra
de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e
em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que
ela não pode exceder 30% do salário ou então o empréstimo será negado.

Data 08/10/2025 -> 16ª Dia
*/

#include <stdio.h>

int main() {

    float valor_casa;
    float salario;
    int ano,meses;
    float prestacao_mensal, limite_maximo;

    printf("=== SIMULADOR DE EMPRRSTIMO IMOBILIARIO ===\n");

    printf("Qual e o valor da casa? ");
    scanf("%f",&valor_casa);

    printf("Qual e o seu salário? ");
    scanf("%f",&salario);

    printf("Em quantos anos vais pagar a casa? ");
    scanf("%d",&ano);

    meses = ano * 12;
    prestacao_mensal = valor_casa / meses;
    limite_maximo = salario * 0.30;

    printf("--- RESULTADO ---\n");
    printf("Valor da prestacao: R$ %f\n",prestacao_mensal);
    printf("Seu limite: R$ %f\n",limite_maximo);

    if(prestacao_mensal <= limite_maximo) {

        printf("EMPRESTIMO APROVADO");
    }
    else {
     
        printf("O EMPRESTIMO FOI NEGADO!\n");
        printf("Prestacao R$ %f excede 30 porcento do salario",prestacao_mensal);
    }
    return 0;
}