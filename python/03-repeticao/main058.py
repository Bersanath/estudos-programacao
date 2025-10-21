'''Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa 
vai parar quando for digitada a idade 999. No final, mostre quantos alunos 
existem na turma e qual é a média de idade do grupo. 

Data 21/10/2025 -> 29ª Dia
'''

media_aluno = 0
soma = 0
quantidade_aluno = 0

while True:

    idade = int(input("Digite as idades dos alunos: "))

    if idade == 999:
        break
    quantidade_aluno += 1
    soma += idade
media_aluno = soma / quantidade_aluno
print(f'Na turma existem {quantidade_aluno} Alunos')
print(f'A media da idade do grupo é: {media_aluno}')