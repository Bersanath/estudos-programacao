/* Crie um programa que tenha uma função SuperSomador(), que vai receber dois 
números como parâmetro e depois vai retornar a soma de todos os valores no 
intervalo entre os valores recebidos.
Ex:  
SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21 
SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85 

Data 11/11/2025 -> 49ª Dia
*/


#include <stdio.h>


int SuperSomador(int num1, int num2){

    int soma = 0;
    for(int i = num1; i < num2 + 1; i++){

        soma += i;
    }
    return soma;
}
int main(){

    int num1,num2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    int resultado = SuperSomador(num1,num2);
    printf("%d",resultado);

    return 0;
}