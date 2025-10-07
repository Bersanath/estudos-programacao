/*Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

Data 07/10/2025 -> 15ª Dia
*/

#include <stdio.h>
#include <string.h>

int main() {

    char jogador1[10];
    char jogador2[10];

    printf("JOGADOR_1: PEDRA-PAPEL-TESOURA: ");
    scanf("%s",jogador1);

    printf("JOGADOR_2: PEDRA-PAPEL-TESOURA: ");
    scanf("%s",jogador2);

    if(strcmp(jogador1,jogador2) == 0 && strcmp(jogador2,jogador1) == 0) {

        printf("EMPATE!");
    }
    else if(strcmp(jogador1, "pedra") == 0 && strcmp(jogador2, "tesoura") == 0) {

        printf("Jogador 1 vence, porque Pedra quebra a Tesoura!");
    }
    else if(strcmp(jogador2, "pedra") == 0 && strcmp(jogador1, "tesoura") == 0) {

        printf("Jogador 2 vence, porque Pedra quebra a Tesoura!");
    }
    else if(strcmp(jogador1, "papel") == 0 && strcmp(jogador2, "pedra") == 0) {

        printf("Jogador 1 vence, porque Papel embrulha a Pedra!");
    }
    else if(strcmp(jogador2, "papel") == 0 && strcmp(jogador1, "pedra") == 0) {

        printf("Jogador 2 vence, porque Papel embrulha a Pedra!");        
    }
    else if(strcmp(jogador1, "tesoura") == 0 && strcmp(jogador2, "papel") == 0) {

        printf("Jogador 1 vence, porque Tesoura corta o Papel!");        
    }
    else if(strcmp(jogador2, "tesoura") == 0 && strcmp(jogador1, "papel") == 0) {

        printf("Jogador 2 vence, porque Tesoura corta o Papel!");        
    }
    else {

        printf("Alguem digitou algo errado! Use apenas: pedra, papel ou tesoura");
    }
    return 0;
}