/*Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e 
mostre na tela: 
a) Quais foram os números sorteados 
b) Quantos números estão acima de 5 
c) Quantos números são divisíveis por 3 

Data 17/10/2025 -> 25ª Dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int numero[20];
    int acima_5 = 0;
    int divi_3 = 0;

    printf("a) Numero sorteados: ");
    for(int i = 0; i < 20; i++) {

        numero[i] = rand() % 11;
        printf("%d ",numero[i]);

        if(numero[i] > 5) {
            acima_5 += 1;
        }
        else if(numero[i] % 3 == 0) {
            divi_3 += 1;
        }
    }
    printf("\nb) Acima de 5: %d\n",acima_5);
    printf("c) Divisiveis por 3: %d\n",divi_3);
    return 0;

}