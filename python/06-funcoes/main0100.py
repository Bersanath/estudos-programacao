'''Melhore o exercício 96, criando além da função Media() uma outra função 
chamada Situacao(), que vai retornar para o programa principal se o aluno está 
APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como 
parâmetro o resultado retornado pela função Media().


Data 12/11/2025 -> 50ª Dia
'''


def Media(nota1,nota2):

    return  (nota1 + nota2)/2
    
def Situacao(media):
    if media >= 7:
        return "APROVADO"
    elif media >= 5:
        return "RECUPERAÇÃO"
    else:
        return "REPROVADO"


nota1 = int(input('Digite a primeira nota: '))
nota2 = int(input('Digite a segunda nota: '))

media = Media(nota1, nota2)
situacao = Situacao(media)

print(f"Média: {media:.1f}")
print(f"Situação: {situacao}")
