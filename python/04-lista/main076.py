'''Crie um programa que preencha automaticamente um vetor numérico com 7 
números gerados aleatoriamente pelo computador e depois mostre os valores 
gerados na tela.

Data 31/10/2025 -> 38ª Dia
'''

import random

lista = []

for i in range(7):

    lista.append(random.randint(1,7))

print(lista)