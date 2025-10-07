/*Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
jogador vai tentar descobrir qual foi o valor sorteado.

Data 07/10/2025 -> 15ª Dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int computador;
    int jogador;

    // Inicializar o gerador de núnero aleatórios

    srand(time(NULL));

    printf("OLA SOU O SEU COMPUTADOR VOU GERAR UM NUMERO ALEATORIO E TENTA ADIVINHAR!\n");

    // Gera número aleatório entre 1 e 5

    computador = rand() % 5 + 1;

    printf("ESCOLHA UM NUMERO ENTRE 1 E 5: ");
    scanf("%d",&jogador);

    if(jogador == computador) {

        printf("VOCE ACERTOU O NUMERO QUE EU GEREI PARABENS!");
    }
    else {

        printf("VOCE PERDEU! O NUMERO QUE EU PENSEI E %d",computador);
    }
    return 0;
}