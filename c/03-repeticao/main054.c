/* Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando 
no final: 
a) Qual foi a média de altura do grupo 
b) Quantas pessoas pesam mais de 90Kg 
c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m 
d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg. 


Data 19/10/2025 -> 27ª Dia
*/

#include <stdio.h>

int main() {

    int i = 0;
    float media_altura = 0,altura,peso;
    int soma = 0, mais_90, mais_190;
    int menos_50;

    for(i = 0; i < 7; i++) {

        printf("Digite o seu Peso: ");
        scanf("%f",&peso);

        printf("Digite a sua Altura: ");
        scanf("%f",&altura);

        soma ++;

        if(peso > 90) {

            mais_90 ++;
        }
        if(peso < 50 && altura < 1.60) {

            menos_50 ++;
        }
        if(altura > 1.90 && peso > 100) {

            mais_90 ++;

        }
    }
    media_altura = soma / i;
    printf("A media de altura do grupo é: %.2f",media_altura);
    printf("São mais de %d pessoa que pesam 90kg",mais_90);
    printf("São menos de %d pessoa que pesam 50kg e tem menos de 1.60m",menos_50);
    printf("São mais de %d mede/medem 1.90 e tem mais de 100kg",mais_190);
    return 0;   
}