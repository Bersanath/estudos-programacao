'''A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.

Data 28/09/2025 -> 7ª Dia
'''

quantidade_km = float(input('Quantidade de km percorridos: '))
quantidade_dia = int(input('Quantidade de dias: '))

km = quantidade_km * 0.20
dia = quantidade_dia * 90

preço_total = dia + km

print(f'O total a se pagar é de {preço_total}')