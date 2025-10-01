/*Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua 
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou 
não um bom aproveitamento (se ficou acima da média 7.0). 

Data 01/10/2025 -> 10ª Dia
*/

#include <stdio.h>

int main() {

    float n1;
    float n2;
    float media;

    printf("Primeira Nota: ");
    scanf("%f",&n1);

    printf("Segunda Nota: ");
    scanf("%f",&n2);

    media = (n1 + n2) / 2;

    if(media > 7.0) {

        printf("O aproveitamento do aluno e Excelente!\n");
        printf("A media do Aluno: %.2f APROVADO",media);
    }
    else {
        printf("O aproveitamento do aluno e Mal!\n");
        printf("A media do Aluno: %.2f REPROVADO",media);
    }
    return 0;
}