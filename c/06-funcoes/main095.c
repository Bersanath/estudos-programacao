/* Refaça o exercício 90, só que agora em forma de função Somador(), que vai 
receber dois parâmetros e vai retornar o resultado da soma entre eles para o 
programa principal.

Data 10/11/2025 -> 48ª Dia
*/

#include <stdio.h>


int Somador(int num1,int num2){

    return num1 + num2;
}
int main(){

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    int resultado = Somador(num1,num2);

    printf("%d",resultado);
    return 0;
}