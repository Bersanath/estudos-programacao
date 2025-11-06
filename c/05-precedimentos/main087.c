/*Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que mostre uma mensagem personalizada, passada como parâmetro. 
Ex: Ao chamar Gerador("Aprendendo Portugol") aparece: 
+-------=======------+ 
Aprendendo Portugol         
+-------=======------+

Data 06/11/2025 -> 45ª Dia
*/

#include <stdio.h>


void gerador(char mensagem[]){

    printf("+--------=====--------+\n");
    printf("%s\n",mensagem);
    printf("+--------=====--------+");
}

int main(){

    gerador("Aprendendo Linguagem C");
    return 0;
}