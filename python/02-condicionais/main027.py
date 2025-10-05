'''Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida: - Média até 4.9: REPROVADO - Média entre 5.0 e 6.9: RECUPERAÇÃO - Média 7.0 ou superior: APROVADO 

Data 05/10/2025 -> 13ª Dia
'''

n1 = float(input('Primeira Nota: '))
n2 = float(input('Segunda Nota: '))

media = (n1 + n2) / 2

if media <= 4.9:

    print(f'A sua Média: {media} REPROVADO!')

elif media == 5.0 or media  <= 6.9:

    print(f'A sua Média: {media} RECUPERAÇÃO!')

else:

    print(f'A sua Média: {media} APROVADO!')