/*Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No 
final, mostre uma listagem com todos os nomes informados, na ordem inversa 
daquela em que eles foram informados.


Data 01/11/2025 -> 39ª Dia
*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome[7][20];

    for(int i = 0; i < 7; i++){

        printf("Digite o seu nome: ");
        fgets(nome[i], 20,stdin);

        nome[i][strcspn(nome[i],"\n")] = '\0';
        
    }
     printf("\nNomes digitados:\n");
    for(int i = 6; i >= 0; i--){

        printf("%s\n",nome[i]);
    }
    return 0;
}