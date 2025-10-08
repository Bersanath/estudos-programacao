/*O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o
indivíduo dentro de certas faixas.
- abaixo de 18.5: Abaixo do peso
- entre 18.5 e 25: Peso ideal
- entre 25 e 30: Sobrepeso
- entre 30 e 40: Obesidade
- acima de 40: Obseidade mórbida
Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado
da altura)

Data 08/10/2025 -> 16ª Dia
*/

#include <stdio.h>

int main() {

    float altura;
    float peso;
    float imc;

    printf("Digite altura (m): ");
    scanf("%f", &altura);

    printf("Digite peso (kg): ");  
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Seu IMC: %.2f\n", imc);

    if(imc < 18.5) {

        printf("ABAIXO DO PESO!");
    }
    else if(imc < 25) {

        printf("PESO IDEAL!");
    }
    else if(imc < 30) {

        printf("SOBREPESO!");
    }
    else if(imc < 40) {

        printf("OBESIDADE!");
    }
    else {

        printf("OBESIDADE MORBIDA!");
    }
    return 0;
}