/*Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.

Data 30/09/2025 -> 9ª Dia
*/

#include <stdio.h>

int main() {

    float velocidade;
    float multa;
    float execesso;

    scanf("%f",&velocidade);

    if(velocidade > 80) {
        printf("Voce foi multado!");
        execesso = velocidade - 80;
        multa = execesso * 5;
        printf("Velocidade registrada: %f",velocidade);
        printf("Excesso: %f",execesso);
        printf("A sua multa e de: R$%.2f",multa);
    }
    else {
        printf("Velocidade dentro do limite. Dirija com seguranca!");
    }
    return 0;
}