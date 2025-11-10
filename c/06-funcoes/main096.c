/*Crie um programa que tenha uma função Media(), que vai receber as 2 notas de 
um aluno e retornar a sua média para o programa principal. 


Data 10/11/2025 -> 48ª Dia
*/


#include <stdio.h>

int Media(float nota1, float nota2){

    return (nota1 + nota2)/2;
}
int main(){

    float nota1,nota2;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    float resultado = Media(nota1,nota2);
    printf("%.2f",resultado);
    return 0;
}