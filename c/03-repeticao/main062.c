/*Faça um programa usando a estrutura “faça enquanto” que leia a idade de 
várias pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou 
não continuar a digitar dados. No final, quando o usuário decidir parar, mostre 
na tela: 
a) Quantas idades foram digitadas 
b) Qual é a média entre as idades digitadas 
c) Quantas pessoas tem 21 anos ou mais.


Data 23/10/2025 -> 31ª Dia
*/

#include <stdio.h>
#include <string.h>

int main(){

    int quantidade_idade = 0;
    int soma = 0, idade,idade_mais21 = 0;
    float media_idade = 0;
    char opcao[2];

    do{
        printf("Digite a sua idade: ");
        scanf("%d",&idade);

        quantidade_idade ++;
        if(idade >= 21){

            idade_mais21 ++;
        }
        soma += idade;
        printf("Desejas continuar (n/s): ");
        scanf("%s",opcao);

        if(strcmp(opcao, "n") == 0){

            break;
        }
    }while(strcmp(opcao, "n"));
    media_idade = (float) soma / quantidade_idade;
    printf("Foi digitado %d idades\n",quantidade_idade);
    printf("A media entra as idades e:%.2f\n",media_idade);
    printf("Tem %d pessoas com 21 ou mais de 21 anos\n",idade_mais21);
    return 0;
}