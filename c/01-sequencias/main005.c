/*Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5

Data 24/09/2025 -> 3ª Dia 
*/

#include <stdio.h>

int main() {

    float nota1;
    float nota2;
    float media;

    scanf("%f %f",&nota1,&nota2);

    media = (nota1 + nota2)/2;

    printf("A media entre %.2f e %.2f = %.1f",nota1,nota2,media);
    return 0;
}