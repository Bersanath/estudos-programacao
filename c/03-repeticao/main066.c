/*Escreva um programa que leia um número qualquer e mostre a tabuada desse 
número, usando a estrutura “para”. 
Ex: Digite um valor: 5 
5 x 1 = 5 
5 x 2 = 10 
5 x 3 = 15 ... 

Data 26/10/2025 -> 33ª Dia
*/

#include <stdio.h>

int main(){

    for(int i = 1; i <= 12; i++){

        printf("%d x %d = %d\n",5,i,5 * i);
    }
    return 0;
}