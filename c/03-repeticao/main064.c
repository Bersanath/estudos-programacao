/*Desenvolva um programa usando a estrutura “para” que mostre na tela a 
seguinte contagem: 
0 5 10 15 20 25 30 35 40 Acabou! 

Data 24/10/2025 -> 32ª Dia
*/

#include <stdio.h>


int main(){

    for(int i = 0; i <= 40; i = i + 5){

        printf("%d ",i);
    }
    printf("Acabou!");
    return 0;
}