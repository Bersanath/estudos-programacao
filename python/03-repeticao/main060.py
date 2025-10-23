'''Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. 
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre: 
a) O nome da pessoa mais velha 
b) O nome da mulher mais jovem 
c) A média de idade do grupo 
d) Quantos homens tem mais de 30 anos 
e) Quantas mulheres tem menos de 18 anos 

Data 22/10/2025 -> 30ª Dia
'''

pessoa_mais_velha_idade = 0
nome_pessoa_mais_velha = ""
mulher_jovem_idade = 999
nome_mulher_jovem = ""
soma = 0
cont = 0
homem_mais30 = 0
mulher_menos18 = 0

while True:
    nome = input('Digite o seu nome: ')
    idade = int(input('Digite a sua idade: '))
    sexo = input('Digite o seu sexo (m/f): ').lower()

    # Pessoa mais velha
    if idade > pessoa_mais_velha_idade:
        pessoa_mais_velha_idade = idade
        nome_pessoa_mais_velha = nome

    # Mulheres
    if sexo == 'f':
        if idade < mulher_jovem_idade:
            mulher_jovem_idade = idade
            nome_mulher_jovem = nome
        if idade < 18:
            mulher_menos18 += 1

    # Homens
    if sexo == 'm' and idade > 30:
        homem_mais30 += 1

    soma += idade
    cont += 1
    
    opcao = input('Deseja continuar (s/n): ').lower()
    if opcao == 'n':
        break

media_grupo = soma / cont
print(f'\n--- RESULTADOS ---')
print(f'a) Pessoa mais velha: {nome_pessoa_mais_velha} ({pessoa_mais_velha_idade} anos)')
print(f'b) Mulher mais jovem: {nome_mulher_jovem} ({mulher_jovem_idade} anos)')
print(f'c) Média de idade do grupo: {media_grupo:.1f} anos')
print(f'd) Homens com mais de 30 anos: {homem_mais30}')
print(f'e) Mulheres com menos de 18 anos: {mulher_menos18}')