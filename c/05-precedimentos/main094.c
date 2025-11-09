/*[DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado 
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos 
termos da sequência serão mostrados na tela. O seu procedimento deve receber 
esse valor e mostrar a quantidade de elementos solicitados. 
Obs: Use os exercícios 70 e 75 para te ajudar na solução 
Ex:  
Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM 
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM 

Data 09/11/2025 -> 47ª Dia
*/

#include <stdio.h>

void Fibonacci(int num){

    int anterior = 0;
    int atual = 1;

    printf("%d ",atual);

    for(int i = 1; i < num; i++){
        int proximo = anterior + atual;
        printf(">>%d ",proximo);
        anterior = atual;
        atual = proximo;
    }
    printf(">>FIM");
}
int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    Fibonacci(num);
    return 0;
}