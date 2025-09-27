/*Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de Delta.

Data 27/09/2025 -> 6ª Dia
*/

#include <stdio.h>

int main() {

    int A;
    int B;
    int C;
    int delta;

    printf("Valor de A: ");
    scanf("%d",&A);

    printf("Valor de B: ");
    scanf("%d",&B);

    printf("Valor de C: ");
    scanf("%d",&C);

    delta = (B*B) - (4 * A * C);
    
    printf("Valor do delta e: %d",delta);
    return 0;

}