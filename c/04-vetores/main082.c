/*Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em 
um vetor. No final, mostre:  
a) Qual é a média da turma 
b) Quantos alunos estão acima da média da turma 
c) Qual foi a maior nota digitada 
d) Em que posições a maior nota aparece 


Data 03/11/2025 -> 41ª Dia
*/


#include <stdio.h>

int main(){

    float notas[10];
    float media = 0;
    float soma = 0;
    int acima = 0;
    float maior = 0;

    for(int i = 0; i < 10; i++){

        printf("Digite a sua nota: ");
        scanf("%f",&notas[i]);

        soma += notas[i];

        if(notas[i] > maior){

            maior = notas[i];
        }
    }  
    media = soma / 10;
    for(int i = 0; i < 10; i++){

        if(notas[i] > media){

            acima ++;
        }
    }
    printf("a) A media da turma e de: %.2f\n",media); 
    printf("b) %d alunos estao acima da media!\n",acima);
    printf("c) A maior nota digitada foi: %.2f\n",maior);
      printf("d) A maior nota aparece nas posicoes: ");
    for(int i = 0; i < 10; i++) {
        if(notas[i] == maior) {
            printf("%d ", i);
        }
    }
    return 0;
}