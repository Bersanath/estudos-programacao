'''Faça um algoritmo que leia um determinado ano e mostre se ele é ou não
BISSEXTO.

Data 02/10/2025 -> 10ª Dia
'''

ano = int(input('Digite o ano: '))

if ano % 4 == 0 or ano % 400 == 0:
    print(f'O ano {ano} é BISSEXTO')

else:
    print(f'O ano {ano} não é BISSEXTO')
