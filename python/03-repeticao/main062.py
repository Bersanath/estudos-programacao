'''Faça um programa usando a estrutura “faça enquanto” que leia a idade de 
várias pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou 
não continuar a digitar dados. No final, quando o usuário decidir parar, mostre 
na tela: 
a) Quantas idades foram digitadas 
b) Qual é a média entre as idades digitadas 
c) Quantas pessoas tem 21 anos ou mais.


Data 23/10/2025 -> 31ª Dia
'''

quantidade_idade = 0
media_idade = 0
idade_mais21 = 0
soma = 0
while True:

    idade = int(input('Digite a sua idade: '))
    quantidade_idade += 1
    if idade >= 21:
        idade_mais21 += 1
    soma += idade
    opcao = input('Desejas continuar (s/n): ')
    if opcao == 'n':
        break
media_idade = soma / quantidade_idade
print(f'Foi digitado {quantidade_idade} idades')
print(f'A media entra as idades é: {media_idade}')
print(f'Tem {idade_mais21} pessoas com 21 ou mais de 21 anos')