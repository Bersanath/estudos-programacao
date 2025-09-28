'''Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
seu novo salário, com 15% de aumento.

Data 28/09/2025 -> 7ª Dia
'''

salario = float(input('Digite o Salario do Funcionario: '))

aumennto = salario * 0.15

novo_salario = salario + aumennto

print(f'O salario do funcionario era {salario} com o aumento de 15% agora é: {novo_salario}')