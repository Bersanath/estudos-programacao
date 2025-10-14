/* Crie um algoritmo que leia o valor inicial da contagem, o valor final e o 
incremento, mostrando em seguida todos os valores no intervalo: 
Ex: Digite o primeiro Valor: 3 
Digite o último Valor: 10 
Digite o incremento: 2 
Contagem: 3 5 7 9 Acabou!

Data 14/10/2025 -> 22ª Dia
*/

#include <stdio.h>

int main() {

    int primeiro_valor;
    int ultimo_valor;
    int incremento;
    int cont;

    scanf("%d %d %d",&primeiro_valor,&ultimo_valor,&incremento);

    if(primeiro_valor < ultimo_valor) {
        cont = primeiro_valor;
        while(cont <= ultimo_valor) {
            printf("%d ",cont);
            cont += incremento;
        }
    }
    else {
        cont = primeiro_valor;
        while(cont >= ultimo_valor) {

            printf("%d ",cont);
            cont -= incremento;
        }
    }
    return 0;
}