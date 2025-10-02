/*Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
situação em relação ao alistamento militar.
- Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
alistamento.
- Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
alistamento.

Data 02/10/2025 -> 10ª Dia
*/

#include <stdio.h>

int main() {

    int ano;
    int alistamento;
    int alta;
    scanf("%d",&ano);

    alistamento = 2025 - ano;
    if(alistamento < 18) {
        printf("Falta %d anos para fazer o alistamento",alistamento);
    }
    else if(alistamento == 18) {

        printf("Voce ja tens a idade para fazer o alistamento!");
    }
    else if(alistamento > 18) {

        alta = alistamento - 18;
        printf("Ja se passaram %d anos para fazer o alistamento",alta);
    }
    return 0;

}