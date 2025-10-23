'''Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai 
perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre: 
a) qual é a maior idade lida 
b) quantos homens foram cadastrados 
c) qual é a idade da mulher mais jovem 
d) qual é a média de idade entre os homens 

Data 22/10/2025 -> 30ª Dia
'''


maior_idade = 0
homem_cadastrado = 0
mulher_jovem = None
media_homem = 0
soma = 0
while True:
    sexo = str(input('Digite o sexo: '))
    idade = int(input('Digite a idade: '))

    if idade > maior_idade:
        maior_idade = idade
    if sexo == 'm':
        homem_cadastrado += 1
        soma += idade
    if sexo == 'f':
        if mulher_jovem is None or  idade < mulher_jovem:
            mulher_jovem = idade

    opcao = input('Desejas continuar (s/n): ')
    if opcao == 'n':
        break
media_homem = soma / homem_cadastrado
print(f'a) A maior idade lida foi: {maior_idade}')
print(f'b) No total for cadastrado {homem_cadastrado} no sistema')
print(f'c) A idade da mulher mais jovem é: {mulher_jovem}')
print(f'b) A media de idade entres os homens é: {media_homem}')