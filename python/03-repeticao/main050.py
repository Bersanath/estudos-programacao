'''Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e 
mostre na tela: 
a) Quais foram os números sorteados 
b) Quantos números estão acima de 5 
c) Quantos números são divisíveis por 3 

Data 17/10/2025 -> 25ª Dia
'''

import random

sorteio = []
acima_5 = 0
divi_3 = 0

for _ in range(20):
    numero = random.randint(1,10)
    sorteio.append(numero)
    if numero > 5:
        acima_5 += 1
    elif numero % 3 == 0:
        divi_3 += 1
print(f'a) Números sorteados: {sorteio}')
print(f'b) Números acima de 5: {acima_5}')
print(f'c) Números divisíveis por 3: {divi_3}')