'''Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
situação em relação ao alistamento militar.
- Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
alistamento.
- Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
alistamento.

Data 02/10/2025 -> 11ª Dia
'''

ano = int(input('Digite o seu ano de nascimento: '))

alistamento = 2025 - ano

if alistamento < 18:
    print(f'Falta {alistamento} anos para o alistamento')

if alistamento == 18:
    print('Você já tens a idade para fazer o listamento')

elif alistamento > 18:
    alta = alistamento - 18
    print(f'Já se passaram {alta} anos para fazer o alistamento')