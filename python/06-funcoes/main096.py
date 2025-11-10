'''Crie um programa que tenha uma função Media(), que vai receber as 2 notas de 
um aluno e retornar a sua média para o programa principal. 


Data 10/11/2025 -> 48ª Dia
'''


def Media(nota1,nota2):

    return (nota1 + nota2)/2

nota1 = int(input('Digite a primeira nota: '))
nota2 = int(input('Digite a segunda nota: '))

resultado = Media(nota1,nota2)
print(resultado)