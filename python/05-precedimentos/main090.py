'''Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses 
valores para um procedimento Somador() que vai calcular e mostrar a soma entre 
eles. 

Data 07/11/2025 -> 45ª Dia
'''


def somador(n1,n2,soma):
    print(f'{n1} + {n2} = {soma}')

num1 = int(input('Digite num1: '))
num2 = int(input('Digite num2: '))

soma = num1 + num2
somador(num1,num2,soma)