/*O programa acima vai ter um problema quando digitarmos o primeiro valor 
maior que o último. Resolva esse problema com um código que funcione em qualquer 
situação.

Data 15/10/2025 -> 23ª Dia
*/

#include <stdio.h>


int main() {

    int primeiro;
    int ultimo;
    int incremento;
    int cont;

    scanf("%d %d %d",&primeiro,&ultimo,&incremento);

    if(primeiro < ultimo) {
        cont = primeiro;
        while(cont <= ultimo) {

            printf("%d ",cont);
            cont += incremento;
        }
        
    }
    else {
        cont = primeiro;
        while(cont >= ultimo) {

            printf("%d ",cont);
            cont -= incremento;
        }
    }
    return 0;
}