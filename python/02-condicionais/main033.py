'''Escreva um programa para aprovar ou não o empréstimo bancário para a compra
de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e
em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que
ela não pode exceder 30% do salário ou então o empréstimo será negado.

Data 08/10/2025 -> 16ª Dia
'''

print('=== SIMULADOR DE EMPRÉSTIMO IMOBILIÁRIO ===')

valor_casa = float(input('Qual é o valor da casa? '))
salario = float(input('Qual é o seu salário? '))
anos = int(input('Em quantos anos vais pagar a casa? '))

meses = anos * 12
prestacao_mensal = valor_casa / meses
limite_maximo = salario * 0.30

print(f'\n--- RESULTADO ---')
print(f'Valor da prestação: R$ {prestacao_mensal:.2f}')
print(f'Seu limite: R$ {limite_maximo:.2f}')

if prestacao_mensal <= limite_maximo:

    print('O EMPRESTIMO FOI ACEITO!')

else:

    print('O EMPRESTIMO FOI NEGADO!')
    print(f'Prestação R$ {prestacao_mensal:.2f} excede 30% do salário')