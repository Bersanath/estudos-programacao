'''Crie um programa usando a estrutura “faça enquanto” que leia vários números. 
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na 
tela: 
a) O somatório entre todos os valores 
b) Qual foi o menor valor digitado 
c) A média entre todos os valores 
d) Quantos valores são pares

Data 24/10/2025 -> 32ª Dia
'''

somatorio = 0
menor = None
media = 0
cont = 0
pares = 0
while True:

    num = int(input('Digite um número: '))
    opcao = input('Desejas continuar? (s/n): ').lower()

    somatorio += num
    cont += 1
    if menor is None or num < menor:
        menor = num
    if num % 2 == 0:
        pares += 1 

    if opcao == 'n':
        break
    
print(cont)
media = somatorio / cont
print(f'a) O somatório entre os valores é: {somatorio}')
print(f'b) O menor valor digitado foi: {menor}')
print(f'c) A media entre os valores é: {media}')
print(f'd) {pares} valores são pares')