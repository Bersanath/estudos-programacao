''' Faça um programa que leia 7 números inteiros e no final mostre o somatório 
entre eles.


Data 16/10/2025 -> 24ª Dia
'''

somatorio = 0
cont = 1
while cont <= 7:
    num = int(input('Digite um número: '))
    somatorio += num
    cont += 1

print(somatorio)