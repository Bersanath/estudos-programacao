'''Desenvolva um programa que leia o nome de um funcionário, seu salário,
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
acordo com a tabela a seguir:
- Até 3 anos de empresa: aumento de 3%
- entre 3 e 10 anos: aumento de 12.5%
- 10 anos ou mais: aumento de 20%

Data 06/10/2025 -> 15ª Dia
'''

print('=== SISTEMA DE REAJUSTE SALARIAL ===')

nome = str(input('NOME DO FUNCIONARIO: '))
salario = float(input('SALARIO DO FUNCIONARIO: '))
anos = int(input('ANO DE TRABALHO NA EMPRESA: '))

if anos < 3:

    percentual = 3.0
    reajuste = salario * (percentual / 100)
    novo_salario = salario + reajuste

elif anos < 10:

    percentual = 12.5
    reajuste = salario * (percentual / 100)
    novo_salario = salario + reajuste

else:

    porcentual = 20
    reajuste = salario * (porcentual / 100)
    novo_salario = salario + reajuste

print(f'\n--- RESUMO DO REAJUSTE ---')
print(f'FUNCIONARIO: {nome}')
print(f'TEMPO DE EMPRESA: {anos} ANOS')
print(f'SALARIO ANTERIOR: R$ {salario:.2f}')
print(f'PERCENTUAL DE AUMENTO: {percentual}%')
print(f'VALOR DO AUMENTO: R$ {reajuste:.2f}')
print(f'NOVO SALARIO: R$ {novo_salario:.2f}')
print('-' * 30)