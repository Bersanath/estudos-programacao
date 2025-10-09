/*Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo
de triângulo será formado:
- EQUILÁTERO: todos os lados iguais
- ISÓSCELES: dois lados iguais
- ESCALENO: todos os lados diferentes

Data 06/10/2025 -> 15ª Dia
*/

#include <stdio.h>

int main() {

    float num1;
    float num2;
    float num3;

    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 < num2 + num3 && num2 < num1 + num3 && num3 < num1 +num2){

        printf("OS SEGMENTOS FORMAM UM TRIANGULO");
          if(num1 == num2 && num1 == num3) {

        printf("TRIANGULO EQUILATERO!");
    }
    else if(num1 == num2 || num2 == num3 || num3 == num1) {

        printf("TRIANGULO ISOSCELES!");
    }
  
    else {
        printf("TRIANGULO ESCALENO!");
    }
    }
    else {

        printf("OS SEGMENTO NAO FORMAM UM TRIANGULO!");
    }
  
    return 0;
}