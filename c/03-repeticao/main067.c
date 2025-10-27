/*Faça um programa usando a estrutura “para” que leia um número inteiro 
positivo e mostre na tela uma contagem de 0 até o valor digitado: 
Ex: Digite um valor: 9 
Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM! 

Data 27/10/2025 -> 34ª Dia*/

#include <stdio.h>


int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    for(int i = 0; i <= num; i++){

        printf("%d ",i);
    }
    printf("FIM!");
    return 0;
}