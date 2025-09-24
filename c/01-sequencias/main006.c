/*Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10

Data 24/09/2025 -> 3ª Dia
*/

#include <stdio.h>

int main() {

    int num;
    int ant;
    int suc;

    scanf("%d",&num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor de %d e %d\n",num,ant);
    printf("O sucessor de %d e %d",num,suc);
    return 0;
}