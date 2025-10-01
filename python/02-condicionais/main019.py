'''Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua 
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou 
não um bom aproveitamento (se ficou acima da média 7.0). 

Data 01/10/2025 -> 10ª Dia
'''

n1 = float(input('Primeira Nota: '))
n2 = float(input('Segunda Nota: '))

media = (n1 + n2) / 2

if media >= 7.0:
    print('O aproveitamento do alundo é Excelente!')
    print(f'A média do Aluno: {media} APROVADO')

else:
    print('O aprovetamento do aluno é Mal')
    print(f'A média do Aluno: {media} REPROVADO')
