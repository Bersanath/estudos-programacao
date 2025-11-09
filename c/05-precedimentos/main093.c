/*Faça um programa que tenha um procedimento chamado Contador() que recebe 
três valores como parâmetro: o início, o fim e o incremento de uma contagem. O 
programa principal deve solicitar a digitação desses valores e passá-los ao 
procedimento, que vai mostrar a contagem na tela. 
Ex: Para os valores de início (4), fim (20) e incremento(3) teremos 
Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM

Data 09/11/2025 -> 47ª Dia
*/


#include <stdio.h>

void Contador(int inicio, int fim, int incremento){

    for(int i = inicio; i < fim; i = incremento++){

        printf("%d >>",i);
    }
    printf("FIM");
}
int main(){

    int inicio,fim,incremento;

    printf("Digite o Inicio: ");
    scanf("%d",&inicio);

    printf("Digite o Fim: ");
    scanf("%d",&fim);

    printf("Digite o Incremento: ");
    scanf("%d",&incremento);
    
    Contador(inicio,fim,incremento);
    return 0;
}