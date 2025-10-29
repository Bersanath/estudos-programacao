/* Faça um programa que preencha automaticamente um vetor numérico com 8 
posições, conforme abaixo: 
 
999 999 999 999 999 999 999 999 
0 1 2 3 4 5 6 7

Data 29/10/2025 -> 36ª Dia
*/

#include <stdio.h>

int main(){

    int vetor[8] = {999,999,999,999,999,999,999,999};

    for(int i = 0; i < 8; i++){

        printf("%d ",vetor[i]);
    }
    return 0;
}