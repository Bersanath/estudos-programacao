'''Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
- O primeiro valor é o maior
- O segundo valor é o maior
- Não existe valor maior, os dois são iguais

Data 04/10/2025 -> 12ª Dia
'''
num1 = int(input('Primeiro Número: '))
num2 = int(input('Segundo Número: '))

if num1 > num2:
    print(f'O {num1} é maior que {num2}')
elif num2 > num1:
    print(f'O {num2} é maior que o {num1}')

else:
    print('Ambos são iguais!')