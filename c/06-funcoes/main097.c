/*Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma 
adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o 
maior entre eles.

Data 11/11/2025 -> 49ª Dia
*/

#include <stdio.h>

int Maior(int num1, int num2, int num3){

    int maior = 0;

    if(num1 > num2 && num1 > num3){

        maior = num1;
    }
    else if(num2 > num3 && num2 > num1){

        maior = num2;
    }
    else if(num3 > num1 && num3 > num2){

        maior = num3;
    }
    return maior;
}
int main(){

    int num1,num2,num3;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    printf("Digite o terceiro numero: ");
    scanf("%d",&num3);

    int resultado = Maior(num1,num2,num3);

    printf("%d",resultado);
    return 0;
}