/*Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
para todos, mas especialmente para mulheres. Faça um programa que leia nome,
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
que:
- Homens ganham 5% de desconto
- Mulheres ganham 13% de desconto

Data 03/10/2025 -> 11ª Dia
*/

#include <stdio.h>

int main() {

    char nome[100];
    char sexo;
    float produto,desconto;

    printf("Digite o seu nome: ");
    fgets(nome, 100, stdin);

    printf("Digite o seu sexo: ");
    scanf("%c",&sexo);

    printf("Digite o valor do produto: ");
    scanf("%f",&produto);

    if(sexo == 'f' || sexo == 'F') {
        desconto = produto - (produto * 13 / 100);
        printf("'Devido o dia da Mulher a loja oferece desconto de 13 procento para todas as mulheres o produto da senhora %s que está %.3f com o desconto de 13 porcento vai custar %.3f",nome,produto,desconto);
    }    
    else if(sexo == 'm' || sexo == 'M') {
        desconto = produto - (produto * 5 / 100);
        printf("'Devido o dia da Mulher a loja oferece desconto de 5 procento para todas as mulheres o produto do senhor %s que está %.3f com o desconto de 5 porcento vai custar %.3f",nome,produto,desconto);
    }
    else {
        printf("Sexo inavlido!");
    }
    return 0;
}