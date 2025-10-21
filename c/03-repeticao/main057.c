/*Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. 
No final, mostre o total de salários pagos aos homens e o total pago às 
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não 
sempre que ler os dados de um funcionário.

Data 21/10/2025 -> 29ª Dia
*/

#include <stdio.h>
#include <string.h>

int main() {

    float total_homem = 0;
    float total_mulher = 0;
    char sexo[2],opcao[2];
    float salario;

    while(1) {

        printf("Digite o salario do funcionario: ");
        scanf("%f",&salario);

        printf("Digite o sexo do funcionario: ");
        scanf("%s",sexo);

        printf("Se desejas continuares digita (s) se nao (n): ");
        scanf("%s",opcao);

        if(strcmp(sexo, "m") == 0) {

            total_homem += salario;
        }
        else if(strcmp(sexo, "f") == 0) {

            total_mulher += salario;
        }
        printf("Desaja continuar? (s/n): ");
        scanf("%s",opcao);
        if(strcmp(opcao, "n") == 0) {
            break;
        }
        
    }
    printf("O total de salario pago aos Homens foi: %.2f\n",total_homem);
    printf("O total de salario pago as Mulheres foi: %.2f\n",total_mulher);  
    return 0; 
}