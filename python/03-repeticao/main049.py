''' Crie um programa que leia 6 números inteiros e no final mostre quantos deles 
são pares e quantos são ímpares.

Data 17/10/2025 -> 25ª Dia
'''

pares = 0
impares = 0
for i in range(6):
    num = int(input('Digite um número: '))
    
    if num % 2 == 0:
        pares += 1
    else:
        impares += 1

print(f'São {pares} números Pares!')
print(f'São {impares} números Ímpares!')
