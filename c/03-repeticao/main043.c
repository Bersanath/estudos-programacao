/*Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1, 
marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo: 
30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...

Data 14/10/2025 -> 22ª Dia
*/

#include <stdio.h>

int main() {

    for(int i = 30; i >= 1; i--) {

        if(i % 4 == 0) {
            printf("[%d ]",i);
        }
        else {
            printf("%d ",i);
        }
    }
    return 0;
}