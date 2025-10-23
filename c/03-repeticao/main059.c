/*Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai 
perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre: 
a) qual é a maior idade lida 
b) quantos homens foram cadastrados 
c) qual é a idade da mulher mais jovem 
d) qual é a média de idade entre os homens 

Data 22/10/2025 -> 30ª Dia
*/


#include <stdio.h>
#include <string.h>


int main() {

    int homem_cadastrados = 0;
    int maior_idade = 0;
    int mulher_jovem = 999;
    int soma = 0,idade;
    float media_homem = 0;
    char sexo[2],opcao[2];

    while(1) {

        printf("Digite o sexo: ");
        scanf("%s",sexo);

        printf("Digite a idade: ");
        scanf("%d",&idade);

        if(idade > maior_idade) {
            maior_idade = idade;
        }
        if(strcmp(sexo, "m") == 0) {
            homem_cadastrados ++;
            soma += idade;
        }
        if(strcmp(sexo, "f") == 0){
            if(idade < mulher_jovem) {
                mulher_jovem = idade;
            }
        }
        printf("Desejas continuar (s/n): ");
        scanf("%s",opcao);

        if(strcmp(opcao, "n") == 0) {
            break;
        }

    }
    media_homem = soma / homem_cadastrados;
    printf("a) A maior idade lida foi: %d\n",maior_idade);
    printf("b) No total for cadastrado %d no sistema\n",homem_cadastrados);
    printf("c) A idade da mulher mais jovem e: %d\n",mulher_jovem);
    printf("b) A media de idade entres os homens e: %.2f\n",media_homem);
    return 0;
}