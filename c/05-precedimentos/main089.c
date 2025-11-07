/*Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que o programador possa escolher uma entre três bordas: 
+-------=======------+ Borda 1 
~~~~~~~~:::::::~~~~~~~ Borda 2 
<<<<<<<<------->>>>>>> Borda 3 
Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2) 
~~~~~~~~:::::::~~~~~~~ 
Portugol Studio 
Portugol Studio 
Portugol Studio 
~~~~~~~~:::::::~~~~~~~

Data 07/11/2025 -> 45ª Dia
*/

#include <stdio.h>

void gerador(char mensagem[], int repeticoes, int borda) {
    
    if(borda == 1) {
        printf("+-------=======------+\n");
    } else if(borda == 2) {
        printf("~~~~~~~~:::::::~~~~~~~\n");
    } else if(borda == 3) {
        printf("<<<<<<<<------->>>>>>>\n");
    }
    
    
    for(int i = 0; i < repeticoes; i++) {
        printf("%s\n", mensagem);
    }
    
    
    if(borda == 1) {
        printf("+-------=======------+\n");
    } else if(borda == 2) {
        printf("~~~~~~~~:::::::~~~~~~~\n");
    } else if(borda == 3) {
        printf("<<<<<<<<------->>>>>>>\n");
    }
}

int main() {
    
    gerador("Portugol Studio", 3, 2);
    return 0;
}