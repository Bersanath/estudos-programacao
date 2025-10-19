/*Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final: 
a) Quantos homens foram cadastrados 
b) Quantas mulheres foram cadastradas 
c) A média de idade do grupo 
d) A média de idade dos homens 
e) Quantas mulheres tem mais de 20 anos 


Data 19/10/2025 -> 27ª Dia
*/

#include <stdio.h>
#include <string.h>


int main() {

    char sexo[2];
    int idade, i = 0, soma_grupo = 0,soma_homem = 0;
    int homem_cadastrado = 0;
    int mulheres_cadastrada = 0;
    int mulhere_mais_20 = 0;
    float media_grupo = 0,media_idade_homem = 0;

    for(i = 0; i < 5; i++){

        printf("Digite a sua idade: ");
        scanf("%d",&idade);

        printf("Digite o seu sexo: ");
        scanf("%s",sexo);

        soma_grupo += idade;

        if(strcmp(sexo,"m") == 0) {

            homem_cadastrado ++;
            soma_homem += idade;
        }
        else if(strcmp(sexo,"f") == 0) {

            mulheres_cadastrada ++;
            if(idade > 20) {

                mulhere_mais_20 ++;
            }

        }
    } 
    media_grupo = (float) soma_grupo / i; 
    media_idade_homem = (float) soma_homem / homem_cadastrado; 
    printf("a) Foi cadastrados no sistema %d Homens\n",homem_cadastrado);
    printf("b) Foi cadastrados no sistema %d Mulheres\n",mulheres_cadastrada);
    printf("c) A media de idade no grupo e: %.1f\n",media_grupo);
    printf("d) A media de idade dos Homens e: %.1f\n",media_idade_homem);
    printf("e) Tem %d muilheres com idade acima dos 20 anos",mulhere_mais_20);
    return 0;
}