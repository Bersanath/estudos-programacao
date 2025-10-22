/*Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. 
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre: 
a) O nome da pessoa mais velha 
b) O nome da mulher mais jovem 
c) A média de idade do grupo 
d) Quantos homens tem mais de 30 anos 
e) Quantas mulheres tem menos de 18 anos 

Data 21/10/2025 -> 29ª Dia
*/

#include <stdio.h>
#include <string.h>

int main() {
    int pessoa_mais_velha_idade = 0, cont = 0;
    int soma = 0, idade;
    int mulher_jovem_idade = 999;
    int homem_30 = 0;
    int mulher_18 = 0;
    char nome[100], nome_mulher_jovem[100] = "", nome_pessoa_mais_velha[100] = "";
    float media_grupo;
    char sexo[2], opcao[2];

    while(1) {
        // Limpar buffer e ler nome
        printf("Digite o seu nome: ");
        getchar(); // Limpar \n do buffer
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = 0; // Remover \n do final

        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        printf("Digite o seu sexo (m/f): ");
        scanf("%s", sexo);

        // Pessoa mais velha
        if(idade > pessoa_mais_velha_idade) {
            pessoa_mais_velha_idade = idade;
            strcpy(nome_pessoa_mais_velha, nome);
        }

        // Mulheres
        if(strcmp(sexo, "f") == 0) {
            if(idade < mulher_jovem_idade) {
                mulher_jovem_idade = idade;
                strcpy(nome_mulher_jovem, nome);
            }
            if(idade < 18) {
                mulher_18++;
            }
        }

        // Homens
        if(strcmp(sexo, "m") == 0 && idade > 30) {
            homem_30++;
        }

        cont++;
        soma += idade;

        printf("Deseja continuar (s/n): ");
        scanf("%s", opcao);
        if(strcmp(opcao, "n") == 0) {
            break;
        }
    }

    media_grupo = (float)soma / cont;
    
    printf("\n--- RESULTADOS ---\n");
    printf("a) Pessoa mais velha: %s (%d anos)\n", nome_pessoa_mais_velha, pessoa_mais_velha_idade);
    printf("b) Mulher mais jovem: %s (%d anos)\n", nome_mulher_jovem, mulher_jovem_idade);
    printf("c) Media de idade do grupo: %.1f anos\n", media_grupo);
    printf("d) Homens com mais de 30 anos: %d\n", homem_30);
    printf("e) Mulheres com menos de 18 anos: %d\n", mulher_18);

    return 0;
}