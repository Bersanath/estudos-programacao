'''Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em 
um vetor. No final, mostre:  
a) Qual é a média da turma 
b) Quantos alunos estão acima da média da turma 
c) Qual foi a maior nota digitada 
d) Em que posições a maior nota aparece 


Data 03/11/2025 -> 41ª Dia
'''


notas = []
media = 0
soma = 0
acima = 0
maior = 0
posicao = 0
for i in range(10):
    nota = float (input('Digite a sua nota: '))
    soma += nota
    if nota > maior:
        maior = nota
        posicao = i
    notas.append(nota)
media = soma / 10
for nota in notas:
    if nota > media:
        acima += 1
print(f'a) A media da turma é de: {media}')
print(f'b) {acima} alunos estão acima da media!')
print(f'c) A maior nota digita foi: {maior}')
print(f'd) A maior nota aparece nas posições: ', end='')
for i, nota in enumerate(notas):
    if nota == maior:
        print(i, end=' ')
