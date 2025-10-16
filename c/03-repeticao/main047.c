/* Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 
450 + 400 + 350 + 300 + ... + 50 + 0

Data 16/10/2025 -> 24ª Dia
*/

#include <stdio.h>


int main() {

    int somatorio = 0;
    int cont = 500;

    while(cont >= 0) {

        somatorio += cont;
        cont -= 50;
    }
    printf("%d",somatorio);
    return 0;
}