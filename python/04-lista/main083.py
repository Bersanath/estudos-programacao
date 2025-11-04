'''[DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números 
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os 
números gerados e depois coloque o vetor em ordem crescente, mostrando no final 
os valores ordenados.

Data 04/11/2025 -> 42ª Dia
'''

import random

lista = []

for i in range(20):
    aleatorio = random.randint(0,99)
    lista.append(aleatorio)
ordenado = sorted(lista)
print(f'Forma não ordenada: {lista}')
print(f'Forma ordenada: {ordenado}')