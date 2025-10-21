/*Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa 
vai parar quando for digitada a idade 999. No final, mostre quantos alunos 
existem na turma e qual é a média de idade do grupo. 

Data 21/10/2025 -> 29ª Dia
*/


#include <stdio.h>


int main() {

    int soma = 0;
    int quantidade_aluno = 0;
    float media_aluno = 0;
    int idade;

    while(1) {

        printf("Digite as idades dos alunos: ");
        scanf("%d",&idade);

        if(idade == 999) {
            break;
        }
        quantidade_aluno ++;
        soma += idade; 
    }
    media_aluno = (float) soma / quantidade_aluno;
    printf("Na turma existem %d Alunos\n",quantidade_aluno);
    printf("A media de idade do grupo e: %.2f\n",media_aluno);
    return 0;
}