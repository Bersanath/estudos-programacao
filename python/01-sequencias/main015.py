''' Crie um programa que leia o número de dias trabalhados em um mês e mostre o 
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 
por hora trabalhada.

Data 29/09/2025 -> 8ª Dia
'''

dia = int(input('Digite o número de dias trabalhados em um mês: '))

hora = dia * 8
salrio = hora * 25

print(f'No mês o funcionário trabalhou {hora} e ele ganha {salrio}')