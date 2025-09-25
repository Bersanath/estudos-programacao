'''Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666

Data 25/09/2025 -> 4ª Dia
'''

num = float(input('Digite o número: '))

dobro = num * 2
terça = num / 3

print(f'O dobro de {num} é {dobro}')
print(f'A terça parte de {num} é {terça:.5f}')