/*Crie um programa que tenha um procedimento Gerador() que, quando chamado, 
mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas) 
Ex: Ao chamar Gerador() aparece: 
+-------=======------+ 
Olá, Mundo!         
+-------=======------+ 


Data 05/11/2025 -> 43ª Dia
*/

#include <stdio.h>

void gerador(){

    printf("+--------======--------+\n");
    printf("Ola, mundo!\n");
    printf("+--------======--------+");
}

int main(){

    gerador();

}