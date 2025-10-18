/*Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final: 
a) Qual é a média de idade do grupo 
b) Quantas pessoas tem mais de 18 anos 
c) Quantas pessoas tem menos de 5 anos 
d) Qual foi a maior idade lida 

Data 18/10/2025 -> 26ª Dia
*/

#include <stdio.h>


int main() {

    int idade;
    int mais_18 = 0, menos_5 = 0, maior_idade = 0,i = 0,soma = 0;
    float media_idade = 0;

    for(i = 0; i < 10; i++) {

        printf("Digite a sua idade: ");
        scanf("%d",&idade);

        soma += idade;

        if(idade > 18) {

            mais_18 += 1;
        }
        if(idade > maior_idade) {

            maior_idade = idade;
        }
        if(idade < 5) {

            menos_5 += 1;
        }

    }
    media_idade = (float) soma / i;
    printf("a) A media de idade do grupo e: %f\n",media_idade);
    printf("b) Sao %d pessoas que tem mais de 18 anos\n",mais_18);
    printf("c) Sao %d pessoas que tem menos de 5 anos\n",menos_5);
    printf("d) A maior idade foi: %d",maior_idade);

}