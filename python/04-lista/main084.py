'''Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses 
valores em dois vetores, em posições relacionadas. No final, mostre uma listagem 
contendo apenas os dados das pessoas menores de idade.

Data 04/11/2025 -> 42ª Dia
'''


nomes = []
idades = []
menor_nome = []
menor_idade = []

for i in range(9):
    nome = str(input('Digite o seu nome: '))
    idade = int(input('Digite a sua idade: '))

    nomes.append(nome)
    idades.append(idade)

    if idade < 18:
        menor_nome.append(nome)
        menor_idade.append(idade)
print(f'A listagem de menor de idade {menor_nome} {menor_idade}')