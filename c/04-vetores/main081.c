/* Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No 
final, mostre: 
a) Qual é a média de idade das pessoas cadastradas 
b) Em quais posições temos pessoas com mais de 25 anos 
c) Qual foi a maior idade digitada (podem haver repetições) 
d) Em que posições digitamos a maior idade

Data 03/11/2025 -> 41ª Dia
*/


#include <stdio.h>

int main(){

    int idades[8];
    int posicoes[8];
    int cont_maior = 0;
    int cont = 0;
    float media = 0;
    int soma = 0;
    int maior = 0;
    int posicao_idade = 0;

    while(cont < 8){

        printf("Digite a sua idade: ");
        scanf("%d",&idades[cont]);

        soma += idades[cont];
        if(idades[cont] > 25){

            posicoes[cont_maior] = cont;
            cont_maior ++;
        }
        if(idades[cont] > maior){

            maior = idades[cont];
            posicao_idade = cont;
        }
        cont ++;
    }
    media = (float) soma / cont;
    printf("a) A media de idades de pessoas cadastradas e: %.2f\n",media);
    printf("b) Pessoas com mais de 25 anos encontram-se nas posicoes: ");
    for(int i = 0; i < cont_maior; i++){

        printf("%d ",posicoes[i]);
    }
    printf("\nc) A maior idade digitada foi: %d",maior);
    printf("\nd) A idade maior foi digitado na possicao: %d",posicao_idade);
    return 0;
}