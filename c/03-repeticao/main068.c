/*Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura 
“para”. No final, mostre na tela: 
a) Quantas mulheres foram cadastradas 
b) Quantos homens pesam mais de 100Kg 
c) A média de peso entre as mulheres  
d) O maior peso entre os homens 

Data 27/10/2025 -> 34ª Dia
*/

#include <stdio.h>
#include <string.h>


int main(){

    int homens_peso = 0;
    int mulheres = 0;
    float media_peso = 0,peso;
    int soma = 0;
    float peso_homens = 0;
    char sexo[2];
    
    for(int i = 0; i < 8; i++){

        printf("Digite o seu sexo (f/m): ");
        scanf("%s",sexo);

        printf("Digite o seu peso: ");
        scanf("%f",&peso);

        if(strcmp(sexo,"f") == 0){

            mulheres ++;
            soma += peso;
        }
        if(strcmp(sexo,"m") == 0){

            if(peso > 100){
                homens_peso ++;
            }
            if(peso > peso_homens){
                peso_homens = peso;
            }
        }
    }
    media_peso = (float) soma / mulheres;    
    printf("a) %d Mulheres foram cadastradas no sistema\n",mulheres);
    printf("b) %d Homens pesam mais de 100kg\n",homens_peso);
    printf("c) A media de peso entre as mulheres e: %.2f\n",media_peso);
    printf("d) O maior peso entre os homens e: %.2f\n",peso_homens);
    return 0;
}