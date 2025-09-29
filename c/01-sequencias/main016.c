/* Escreva um programa para calcular a redução do tempo de vida de um 
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele 
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule 
quantos dias de vida um fumante perderá e exiba o total em dias.

Data 29/09/2025 -> 8ª Dia
*/

#include <stdio.h>

int main() {

    printf("=== CALCULADOR DE TEMPO DE VIDA PERDIDO ===\n");

    int cigarro_por_dia;
    int anos_fumado;
    int total_cigarro;
    int minutos_perdidos;
    float dias_perdidos;

    printf("Quantos cigarros fuma por dia? ");
    scanf("%d",&cigarro_por_dia);

    printf("Ha quanto anos fuma? ");
    scanf("%d",&anos_fumado);

    total_cigarro = cigarro_por_dia * 365 * anos_fumado;
    minutos_perdidos = total_cigarro * 10;
    dias_perdidos = minutos_perdidos / (24*60);

    printf("--- RESULTADO ---\n");
    printf("Cigarros fumados na vida: %d\n",total_cigarro);
    printf("Minutos de vida perdidos: %d\n",minutos_perdidos);
    printf("Dias de vida perdidos: %.1f\n",dias_perdidos);
    printf("Voce perdeu aproximadamente %.0f dias de vida",dias_perdidos);
    return 0;
    
}