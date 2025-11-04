/* Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses 
valores em dois vetores, em posições relacionadas. No final, mostre uma listagem 
contendo apenas os dados das pessoas menores de idade.

Data 04/11/2025 -> 42ª Dia
*/


#include <stdio.h>
#include <string.h>

int main() {
    int idades[9];
    char nomes[9][50];

    for(int i = 0; i < 9; i++) {
        printf("Digite o seu nome: ");
        scanf("%49s", nomes[i]);
        
        printf("Digite a sua idade: ");
        scanf("%d", &idades[i]);
    }
    
    printf("\nPessoas menores de idade:\n");
    for(int i = 0; i < 9; i++) {
        if(idades[i] < 18) { 
            printf("Nome: %s, Idade: %d\n", nomes[i], idades[i]);
        }
    }
    
    return 0;
}