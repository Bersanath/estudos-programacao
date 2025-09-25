/*Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666

Data 25/09/2025 -> 4ª Dia
*/

#include <stdio.h>

int main() {

    float num;
    float dobro,terca;

    scanf("%f",&num);

    dobro = num * 2;
    terca = num / 3;

    printf("O dobro de %f e %.5f",num,dobro);
    printf("A terca parte de %f e %.5f",num,terca);
    return 0;
}