/*Uma empresa precisa reajustar o salário dos seus funcionários, dando um
aumento de acordo com alguns fatores. Faça um programa que leia o salário atual,
o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa.
No final, mostre o seu novo salário, baseado na tabela a seguir:
- Mulheres
- menos de 15 anos de empresa: +5%
- de 15 até 20 anos de empresa: +12%
- mais de 20 anos de empresa: +23%
- Homens
- menos de 20 anos de empresa: +3%
- de 20 até 30 anos de empresa: +13%
- mais de 30 anos de empresa: +25%~

Data 10/10/2025 -> 19ª Dia
*/


#include <stdio.h>
#include <string.h>

int main() {

    char genero[3];
    float salario_atual;
    float novo_salario,percentagem;
    int anos;

    printf("--- PARA TER ACESSO AOS DADOS DO REAJUSTE DIGITE APENAS (m/h) ---\n");

    printf("Digite o seu Genero: ");
    scanf("%s",genero);

    printf("Digite o seu Salario Atual: ");
    scanf("%f",&salario_atual);

    printf("Digite quantos anos estas na empresa: ");
    scanf("%d",&anos);

    if(strcmp(genero, "m") == 0) {
        if(anos < 15) {
            percentagem = salario_atual * 0.05;
        }
        else if(anos <= 20) {
            percentagem = salario_atual * 0.12;
        }
        else {
            percentagem = salario_atual * 0.23;
        }
    
    }
    else if(strcmp(genero, "h") == 0) {
        if(anos < 20) {
            percentagem = salario_atual * 0.03;
        }
        else if(anos <= 30) {
            percentagem = salario_atual * 0.13;
        }
        else {
            percentagem = salario_atual * 0.25;
        }
    }
    novo_salario = percentagem + salario_atual;
    printf("--- REAJUSTE SALARIAL ---\n");
    printf("Salario Atual: %.2f\n",salario_atual);
    printf("Aumento: %.2f\n",percentagem);
    printf("Novo Salario: %.2f\n",novo_salario);
    printf("------------------------------");
    return 0;
}