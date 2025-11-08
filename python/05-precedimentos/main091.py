'''Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses 
valores para um procedimento Maior() que vai verificar qual deles é o maior e 
mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem 
informando essa característica.


Data 08/11/2025 -> 46ª Dia
'''

def Maior(n1,n2):
    if n1 > n2:
        print(f'O número: {n1} é maior que {n2}')
    elif n2 > n1:
        print(f'O número: {n2} é maior que {n1}')
    else:
        print('Ambos são iguais!')
num1 = int(input('Digite primeiro número: '))
num2 = int(input('Digite segundo número: '))

Maior(num1,num2)