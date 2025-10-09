/*[DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
Analise seus comprimentos e diga se é possível formar um triângulo com essas
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois.

Data 04/10/2025 -> 13ª Dia
*/

#include <stdio.h>

int main() {

    float num1;
    float num2;
    float num3;

    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 + num2 > num3) {
        printf("É possivel formar um Triangulo!");
    }
    else if(num1 + num3 > num2) {
        printf("É possivel formar um Triangulo!");
    }
    else if(num2 + num3 > num1) {
        printf("É possivel formar um Triangulo!");
    }
    else {
        printf("Nao e possivel formar um Triangulo!");
    }
    return 0;
}