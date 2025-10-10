'''Uma empresa precisa reajustar o salário dos seus funcionários, dando um
aumento de acordo com alguns fatores. Faça um programa que leia o salário atual,
o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa.
No final, mostre o seu novo salário, baseado na tabela a seguir:
- Mulheres
- menos de 15 anos de empresa: +5%
- de 15 até 20 anos de empresa: +12%
- mais de 20 anos de empresa: +23%
- Homens
- menos de 20 anos de empresa: +3%
- de 20 até 30 anos de empresa: +13%
- mais de 30 anos de empresa: +25%~

Data 10/10/2025 -> 19ª Dia
'''

salario_atual = float(input('Digite o seu Salário Atual: '))
genero = str(input('Digite o seu Gênero: ')).lower()
anos = int(input('Digite quantos anos estás na empresa: '))

percentagem = 0
genero_valido = True

if genero == 'm':

    if anos < 15:
        percentagem = salario_atual * 0.05
    elif anos <= 20:
        percentagem = salario_atual * 0.12
    else:
        percentagem = salario_atual * 0.23
elif genero == 'h':

    if anos < 20:
        percentagem = salario_atual * 0.03
    elif anos <= 30:
        percentagem = salario_atual * 0.13
    else:
        percentagem = salario_atual * 0.25
else:
    print('Genero invalido por favor digite apenas (m/h)')
    genero_valido = False

if genero_valido:
    novo_salario = percentagem + salario_atual
    print('--- REAJUSTE SALARIAL ---')
    print(f'Salario Atual: {salario_atual:.2f}')
    print(f'Aumento: {percentagem}')
    print(f'Novo Salario: {novo_salario:.2f}')
    print('-'*30)