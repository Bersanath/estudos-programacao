/*Um programa de vida saudável quer dar pontos atividades físicas que podem
ser trocados por dinheiro. O sistema funciona assim:
- Cada hora de atividade física no mês vale pontos
- até 10h de atividade no mês: ganha 2 pontos por hora
- de 10h até 20h de atividade no mês: ganha 5 pontos por hora
- acima de 20h de atividade no mês: ganha 10 pontos por hora
- A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
Faça um programa que leia quantas horas de atividade uma pessoa teve por mês,
calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.

Data 09/10/2025 -> 17ª Dia
*/

#include <stdio.h>

int main() {

    int horas;
    float ganhos;
    int pontos;

    scanf("%d",&horas);

    if(horas <= 10) {

        pontos = horas * 2;
    }
    else if(horas < 20) {

        pontos = horas * 5;
    }
    else {

        pontos = horas * 10;
    }

    ganhos = pontos * 0.05;
    printf("--- EXTRATOS DE PONTOS ---\n");
    printf("Horas no mes: %d\n",horas);
    printf("Pontos totais: %d\n",pontos);
    printf("Valor em reais: R$ %.2f\n",ganhos);
    return 0;
}