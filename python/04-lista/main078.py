'''Escreva um programa que leia 15 números e guarde-os em um vetor. No final, 
mostre o vetor inteiro na tela e em seguida mostre em que posições foram 
digitados valores que são múltiplos de 10.

Data 01/11/2025 -> 39ª Dia
'''

lista = []
multiplo = []
for i in range(15):
    num = int(input('Digite um número: '))
    if num % 10 == 0:
        multiplo.append(i)
    lista.append(num)
    
print(f'Os multiplos de 10 encontram-se nas posições:{multiplo}')
print(lista)