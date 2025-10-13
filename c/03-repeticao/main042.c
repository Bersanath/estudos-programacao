/* Faça um algoritmo que pergunte ao usuário um número inteiro e positivo 
qualquer e mostre uma contagem até esse valor: 
Ex: Digite um valor: 35 
Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!

Data 13/10/2025 -> 21ª Dia
*/

#include <stdio.h>


int main() {

    int num;

    scanf("%d",&num);

    for(int i = 1; i <= num; i++) {

        printf("%d ",i);
    }
    printf("Acabou!");
    return 0;
}