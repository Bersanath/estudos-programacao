'''Crie um programa que leia o preço de um produto, calcule e mostre o seu
PREÇO PROMOCIONAL, com 5% de desconto.

Data 27/09/2025 -> 6ª Dia
'''

produto = float(input('Qual é o preço do Produto: '))

preço = produto * 0.05
preço_promocional = produto - preço

print(f'O Preço Promocional com desconto de {preço} é: {preço_promocional}')