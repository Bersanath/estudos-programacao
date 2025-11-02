'''Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. 
No final, mostre quais são os números pares que foram digitados e em que 
posições eles estão armazenados.

Data 02/11/2025 -> 40ª Dia
'''


cont = 0
lista = []
pares = []
posicoes = []
while cont < 10:
    num = int(input('Digite um número: '))
    if num % 2 == 0:
        pares.append(num)
        posicoes.append(cont)
    
    lista.append(num)
    cont += 1
print(f'O números pares digitados são: {pares} e encontram-se nas posições: {posicoes}')
print(lista)