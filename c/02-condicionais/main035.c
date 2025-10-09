/*Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O
aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para
carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa
que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e
quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a
tabela a seguir:
- Carros populares (aluguel de R$90 por dia)
- Até 100Km percorridos: R$0,20 por Km
- Acima de 100Km percorridos: R$0,10 por Km
- Carros de luxo (aluguel de R$150 por dia)
- Até 200Km percorridos: R$0,30 por Km
- Acima de 200Km percorridos: R$0,25 por Km

Data 09/10/2025 -> 17ª Dia
*/

#include <stdio.h>
#include <string.h>

int main() {

    char carro[10];
    int dias;
    float km,aluguel_base,custo_km,total;

    printf("Que tipo de carro pretendes(popular/luxo): ");
    fgets(carro, 10, stdin);

    printf("Quantos dias vais alugar o carro: ");
    scanf("%d",&dias);

    printf("Quantos km foram percorridos: ");
    scanf("%f",&km);

    if(strcmp(carro, 'popular')) {

        aluguel_base = dias * 90;
        if(km <= 100) {

            custo_km = km * 0.20;
        } 
        else {

            custo_km = km * 0.10;
        }
    }
    else if(strcmp(carro, 'luxo')) {

        aluguel_base = dias * 150;
        if(km <= 200) {
            
            custo_km = km * 0.30;
        }
        else {

            custo_km = km * 0.10;
        }
    }
    else {

        printf("Tipo de carro invalido! Use (popular/luxo)");
    }
    total = aluguel_base + custo_km;

    printf("\n--- EXTRATO DO ALUGUEL ---\n");
    printf("Tipo de carro: %s",carro);
    printf("Dias Alugados: %d",dias);
    printf("Km Percorridos: %f km",km);
    printf("Aluguel Base: R$ %.2f", aluguel_base);
    printf("Custo por km: R$ %.2f",custo_km);
    printf("-------------------------------------------\n");
    printf("TOTAL A PAGAR: R$ %.2f",total);
    return 0;

}