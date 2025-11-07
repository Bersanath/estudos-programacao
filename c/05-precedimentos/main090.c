/*Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses 
valores para um procedimento Somador() que vai calcular e mostrar a soma entre 
eles. 

Data 07/11/2025 -> 45ª Dia
*/


#include <stdio.h>


void somador(int n1,int n2, int soma){

    printf("%d + %d = %d",n1,n2,soma);
}

int main(){

    int num1, num2, soma;

    printf("Digite num1: ");
    scanf("%d",&num1);

    printf("Digite num2: ");
    scanf("%d",&num2);

    soma = num1 + num2;
    somador(num1,num2,soma);
    return 0;
}