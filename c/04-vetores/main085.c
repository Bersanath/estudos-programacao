/* Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e 
guarde esses dados em três vetores. No final, mostre uma listagem contendo 
apenas os dados das funcionárias mulheres que ganham mais de R$5 mil. 

Data 05/11/2025 -> 43ª Dia
*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome[5][20];
    char sexo[5];
    float salario[5];

    for(int i = 0; i < 5; i++){

        printf("Digite o seu nome: ");
        scanf("%19s",nome[i]);

        printf("Digite o seu sexo(h/m): ");
        scanf("%s",sexo);

        printf("Digite o seu salario: ");
        scanf("%f",&salario[i]);

    }
    for(int i = 0; i < 5; i++){
        if(strcmp(sexo[i], "m") == 0){

            if(salario[i] > 5000){

                printf("Nome: %s , Salario: %.2f\n",nome[i],salario[i]);
            }

        }

    }
    return 0;

}