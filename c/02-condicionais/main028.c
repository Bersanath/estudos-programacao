/*Faça um programa que leia a largura e o comprimento de um terreno 
retangular, calculando e mostrando a sua área em m². O programa também 
devemostrar a classificação desse terreno, de acordo com a lista abaixo: - Abaixo de 100m² = TERRENO POPULAR - Entre 100m² e 500m² = TERRENO MASTER - Acima de 500m² = TERRENO VIP

Data 05/10/2025 -> 14ª Dia
*/

#include <stdio.h>

int main() {

    float largura;
    float comprimento;
    float area;

    scanf("%f %f",&largura,&comprimento);

    area = comprimento * largura;

    if(area < 100) {

        printf("TERRENO POPULAR!");
    }
    else if(area <= 500) {

        printf("TERRENO MASTER!");
    }
    else {

        printf("TERRENO VIP!");
    }
    return 0;
}