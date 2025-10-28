'''Desenvolva um programa que leia o primeiro termo e a razão de uma 
PA (Progressão Aritmética), mostrando na tela os 10 primeiros elementos da PA e 
a soma entre todos os valores da sequência. 

Data 28/10/2025 -> 35ª Dia
'''

primeiro_termo = int(input('Digite o primeiro Termo: '))
razao = int(input('Digite a razão: '))
termo = primeiro_termo
cont = 0
soma = 0

print('Os 10 primeiros elementos da PA:')
while cont < 10:
    print(f'{termo}',end=" ")
    soma += termo
    termo += razao
    cont += 1
    
print(f'\nSoma de todos os valores: {soma}')
