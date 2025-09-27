'''Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de Delta.

Data 27/09/2025 -> 6ª Dia
'''

A = int(input('Valor de A: '))
B = int(input('Valor de B: '))
C = int(input('Valor de C: '))

delta = (B*B) - (4 * A * C)

print(f'Valor do delta é: {delta}')