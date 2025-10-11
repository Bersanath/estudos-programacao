/*Crie um aplicativo que mostre na tela a seguinte contagem:
0 3 6 9 12 15 18 Acabou!

Data 11/10/2025 -> 20ª Dia
*/

#include <stdio.h>

int main() {

    int cont = 0;

    while(cont <= 18) {

        printf("%d ",cont);

        cont += 3;
    }
    printf("Acabou!");
    return 0;
}