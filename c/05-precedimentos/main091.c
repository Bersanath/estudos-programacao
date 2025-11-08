/*Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses 
valores para um procedimento Maior() que vai verificar qual deles é o maior e 
mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem 
informando essa característica.


Data 08/11/2025 -> 46ª Dia
*/

#include <stdio.h>

void Maior(int n1,int n2){

    if(n1 > n2){
        printf("O numero: %d e maior que o numero: %d",n1,n2);
    }
    else if(n2 > n1){
        printf("O numero: %d e maior que o numero: %d",n2,n1);
    }
    else{
        printf("Ambos sao iguais!");
    }
}
int main(){

    int num1, num2;

    printf("Digite o Primeiro Numero: ");
    scanf("%d",&num1);

    printf("Digite o Segundo Numero: ");
    scanf("%d",&num2);

    Maior(num1,num2);
    return 0;
}