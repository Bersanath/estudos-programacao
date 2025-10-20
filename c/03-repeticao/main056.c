/* Crie um programa que leia vários números pelo teclado e mostre no final o 
somatório entre eles. 
Obs: O programa será interrompido quando o número 1111 for digitado

Data 20/10/2025 -> 28ª Dia
*/

#include <stdio.h>


int main() {

    int somatorio = 0;
    int num;

    while(1) {

        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num == 1111) {

            break;
        }
        somatorio += num;
    }
    printf("O somatorio e: %d",somatorio);
    return 0;
}