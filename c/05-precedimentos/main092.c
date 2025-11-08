/*Crie uma lógica que leia um número inteiro e passe para um procedimento 
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como 
parâmetro é PAR ou ÍMPAR. 

Data 08/11/2025 -> 46ª Dia
*/

#include <stdio.h>

void ParOuImpar(int num){

    if(num % 2 == 0){

        printf("O valor %d e Par!",num);
    }
    else{

        printf("O valor %d e Impar!",num);
    }
}
int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    ParOuImpar(num);
    return 0;
}