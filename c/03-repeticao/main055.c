/*[DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de 
agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4 
tentativas para tentar acertar.

Data 20/10/2025 -> 28ª Dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int tentativa = 0;
    int computador;
    int jogador;
    int acertou = 0;

    srand(time(NULL));

    computador = rand() % 10 + 1;

    while(tentativa < 4 && !acertou) {

        printf("Tentativa %d/4 - Digite seu palpite: ", tentativa + 1);
        scanf("%d",&jogador);

        if(jogador == computador) {

            printf("PARABENS! Voce acertou! O numero era %d\n", computador);
            acertou = 1;
        }
        else {

            if(jogador < computador) {
                printf("Tente um numero MAIOR!\n");
            } else {
                printf("Tente um numero MENOR!\n");
            }
        }
        tentativa ++;

    }
    if(!acertou) {
        printf("Fim de jogo! O numero era %d\n", computador);
    }
    return 0;
}