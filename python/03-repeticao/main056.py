'''Crie um programa que leia vários números pelo teclado e mostre no final o 
somatório entre eles. 
Obs: O programa será interrompido quando o número 1111 for digitado

Data 20/10/2025 -> 28ª Dia
'''

somatorio = 0
while True:

    num = int(input('Digite um número: '))

    if num == 1111:
        break
    somatorio += num

print(f'O somatorio é: {somatorio}')