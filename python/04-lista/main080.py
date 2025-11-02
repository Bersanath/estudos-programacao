''' Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um 
número (chave) e seu programa deve mostrar em que posições essa chave foi 
encontrada. Mostre também quantas vezes a chave foi sorteada.

Data 02/11/2025 -> 40ª Dia
'''

import random

lista = []
posicoes = []
cont = 0


for i in range(30):
    aleatorio = random.randint(1,15)
    lista.append(aleatorio)

chave = int(input("Digite a chave: "))
for i in range(30):
    if lista[i] == chave:
        posicoes.append(i) 
        cont += 1
if cont > 0:
    print(f'A chave {chave} foi encontrada {cont} vezes')
    print(f'Posições: {posicoes}')
else:
    print(f'A chave {chave} não foi encontrada')

print(f'Vetor sorteado: {lista}')