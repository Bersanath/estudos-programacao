/*Crie um programa usando a estrutura “faça enquanto” que leia vários números. 
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na 
tela: 
a) O somatório entre todos os valores 
b) Qual foi o menor valor digitado 
c) A média entre todos os valores 
d) Quantos valores são pares

Data 24/10/2025 -> 32ª Dia
*/

#include <stdio.h>
#include <string.h>


int main(){

    int num, somatorio = 0;
    int pares = 0, cont = 0, menor = 99999;
    float media = 0;
    char opcao[2];

    do{

        printf("Digite um numero: ");
        scanf("%d",&num);

        somatorio += num;
        cont ++;
        if(num < menor)
            menor = num;
        
        if(num % 2 == 0)
            pares ++;
        
        printf("Desjas continuar? (s/n): ");
        scanf("%s",opcao);

        if(strcmp(opcao, "n") == 0)
            break;

    }while(strcmp(opcao, "n"));

    media = somatorio / cont;
    printf("a) O somatorio entre os valores e: %d\n",somatorio);
    printf("b) O menor valor digitado foi: %d\n",menor);
    printf("c) A media entre os valores e: %.2f\n",media);
    printf("d) %d valores sao pares",pares);
    return 0;
}