'''Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final: 
a) Quantos homens foram cadastrados 
b) Quantas mulheres foram cadastradas 
c) A média de idade do grupo 
d) A média de idade dos homens 
e) Quantas mulheres tem mais de 20 anos 


Data 19/10/2025 -> 27ª Dia
'''

cont = 0
homens_cadastrado = 0
mulheres_cadastrada = 0
media_grupo = 0
soma_grupo = 0
soma_homem = 0
media_idade_homem = 0
mulheres_mais_20 = 0

while cont < 5:

    idade = int(input('Digite a sua idade: '))
    sexo = str(input('Digite o seu sexo(m/f): ')).lower()

    soma_grupo += idade

    if sexo == 'm':
        homens_cadastrado +=1
        soma_homem += idade
    elif sexo == 'f':
        mulheres_cadastrada += 1
        if idade > 20:
            mulheres_mais_20 += 1
    
    cont += 1
media_grupo = soma_grupo / cont
media_idade_homem = soma_homem / homens_cadastrado
print(f'a) Foi cadastrados no sistema {homens_cadastrado} Homens')
print(f'b) Foi cadastradas no sistema {mulheres_cadastrada} Mulheres')
print(f'c) A media de idade do grupo é: {media_grupo}')
print(f'd) A media de idade dos Homens é: {media_idade_homem}')
print(f'e) Tem {mulheres_mais_20} Mulheres com a idade acima dos 20 anos')