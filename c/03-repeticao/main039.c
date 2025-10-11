/*Faça um algoritmo que mostre na tela a seguinte contagem:
10 9 8 7 6 5 4 3 Acabou!

Data 11/10/2025 -> 20ª Dia
*/

#include <stdio.h>

int main() {

    for(int i = 10; i >= 3; i--) {

        printf("%d\n",i);
    }
    printf("Acabou!");
    return 0;
}