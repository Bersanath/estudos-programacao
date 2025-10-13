/* Desenvolva um programa que mostre na tela a seguinte contagem: 
100 95 90 85 80 ... 0 Acabou! 

Data 13/10/2025 -> 21ª Dia
*/

#include <stdio.h>

int main() {

    int cont = 100;

    while (cont >= 0) {

        printf("%d ",cont);
        cont -= 5;
    }
    printf("Acabou!");
    return 0;
}