'''Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5

Data 24/09/2025 -> 3ª Dia
'''

nota1 = float(input('Primeira Nota: '))
nota2 = float(input('Segunda Nota: '))

media = (nota1 + nota2) / 2

print(f'A média entre {nota1} e {nota2} = {media}')