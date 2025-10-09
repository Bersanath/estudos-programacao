/* Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida: - Média até 4.9: REPROVADO - Média entre 5.0 e 6.9: RECUPERAÇÃO - Média 7.0 ou superior: APROVADO 

Data 05/10/2025 -> 14ª Dia
*/

#include <stdio.h>

int main() {

    float n1;
    float n2;
    float media;

    scanf("%f %f",&n1,&n2);

    media = (n1 + n2) / 2;

    if(media <= 4.9) {

        printf("A sua Media: %.2f REPROVADO!",media);
    }
    else if(media == 5.0 || media <= 6.9) {

        printf("A sau Media: %.2f RECUPERACAO!",media);
    }
    else {

        printf("A sua Media: %.2f APROVADO!",media);
    }
    return 0;
}