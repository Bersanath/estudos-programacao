'''Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final: 
a) Qual é a média de idade do grupo 
b) Quantas pessoas tem mais de 18 anos 
c) Quantas pessoas tem menos de 5 anos 
d) Qual foi a maior idade lida 

Data 18/10/2025 -> 26ª Dia
'''

media_idade = 0
soma = 0
mais_18 = 0
menos_5 = 0
maior_idade = 0

for i in range(10):
    idade = int(input('Digite a sua idade: '))
    soma += idade
    if idade > 18:

        mais_18 += 1

    if idade > maior_idade:

        maior_idade = idade

    if idade < 5:

        menos_5 += 1

media_idade = soma / 10
print('---- RESULTADO ----')
print(f'a) A média de idade do grupo é: {media_idade}')
print(f'b) São {mais_18} pessoas que têm mais de 18 anos')
print(f'c) São {menos_5} pessoas que têm menos de 5 anos')
print(f'd) A maior idade foi: {maior_idade}')