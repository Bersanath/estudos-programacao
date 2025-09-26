/*Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 85.7m corresponde a:
0.18572Km
1.8572Hm
18.572Dam

Data 25/09/2025 -> 4ª Dia
*/

#include <stdio.h>

int main() {

    float distancia;
    float km,hm,dam;

    scanf("%f",&distancia);

    km = distancia / 1000;
    hm = distancia / 100;
    dam = distancia / 10;

    printf("A distancia de %fm corresponde a:\n",distancia);
    printf("%fKm\n",km);
    printf("%fHm\n",hm);
    printf("%fDam\n",dam);
    return 0;
}