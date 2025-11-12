/* Melhore o exercício 96, criando além da função Media() uma outra função 
chamada Situacao(), que vai retornar para o programa principal se o aluno está 
APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como 
parâmetro o resultado retornado pela função Media().


Data 12/11/2025 -> 50ª Dia
*/


#include <stdio.h>

float Media(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

char* Situacao(float media) { 
    
    if(media >= 7.0) {
        return "APROVADO";
    } else if(media >= 5.0) {
        return "RECUPERAÇÃO";
    } else {
        return "REPROVADO";
    }
}

int main() {
    float nota1, nota2;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    float media = Media(nota1, nota2);
    char* situacao = Situacao(media);
    
    printf("Media: %.1f\n", media);
    printf("Situacao: %s\n", situacao);
    
    return 0;
}