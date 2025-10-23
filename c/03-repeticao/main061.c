/*Crie um programa que mostre na tela a seguinte contagem, usando a estrutura 
“faça enquanto” 
0 3 6 9 12 15 18 21 24 27 30 Acabou! 

Data 23/10/2025 -> 31ª Dia
*/

#include <stdio.h>

int main(){

    int i = 0;
    do{

        printf("%d ",i);
        i += 3;

    }while(i <= 30);
    return 0;
}