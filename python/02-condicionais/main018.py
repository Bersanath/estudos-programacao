'''Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade
dela e depois mostre se ela pode ou não votar.

Data 30/09/2025 -> 9ª Dia
'''

ano = int(input('Digite o seu ano de nascimento: '))
idade = 2025 - ano

if idade >= 18:
    print(f'Você tem: {idade} anos de idade então já tem idade para votar.')
else:
    print(f'Você tem: {idade} anos de idade então ainda podes votar')