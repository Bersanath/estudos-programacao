/*Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela 
qual foi o maior e qual foi o menor preço digitados.

Data 18/10/2025 -> 26ª Dia
*/

#include <stdio.h>


int main() {

    float maior = 0;
    float menor = 0;
    int cont = 0;
    float produto;

    while(cont <= 8) {

        printf("Digite o preco do produto: ");
        scanf("%f",&produto);

        if(produto > maior) {

            maior = produto;
        }
        else if(produto < menor){

            menor = produto;
        }
        cont ++;
    }
    printf("O maior produto digitado e: %.2f\n",maior);
    printf("O menor produto digitado e: %.2f",menor);
    return 0;
}