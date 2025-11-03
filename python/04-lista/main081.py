'''Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No 
final, mostre: 
a) Qual é a média de idade das pessoas cadastradas 
b) Em quais posições temos pessoas com mais de 25 anos 
c) Qual foi a maior idade digitada (podem haver repetições) 
d) Em que posições digitamos a maior idade

Data 03/11/2025 -> 41ª Dia
'''


idades = []
media = 0
soma = 0
cont = 0
posicoes = []
maior = 0
posicao_idade = 0
for i in range(8):
    idade = int(input('Digite a sua idade: '))
    soma += idade
    cont += 1
    if idade > 25:
        posicoes.append(i)
    if idade > maior:
        maior = idade
        posicao_idade = i
    idades.append(idade)
media = soma / cont
print(f'As idades digitadas são: {idades}')
print(f'a) A media de idade das pessoas cadastradas é: {media}')
print(f'b) Pessoas com mais de 25 anos encontram-se nas posições: {posicoes}')
print(f'c) A maior idade digitada foi: {maior}')
print(f'd) A idade maior foi digitado na possição: {posicao_idade}')
