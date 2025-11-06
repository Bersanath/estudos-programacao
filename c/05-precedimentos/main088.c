/* Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que mostre uma mensagem vário 
Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece: 
+-------=======------+ 
Aprendendo Portugol  
Aprendendo Portugol  
Aprendendo Portugol  
Aprendendo Portugol  
+-------=======------+

Data 06/11/2025 -> 45ª Dia
*/

#include <stdio.h>

void gerador(char mensagem[]){

    printf("+--------=====--------+\n");
    for(int i = 0; i < 4; i++){

        printf("%s\n",mensagem);
    }
    printf("+--------=====--------+");
}

int main(){

    gerador("Aprendendo Linguagem C");
    return 0;
}