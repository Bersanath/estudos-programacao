'''Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O
aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para
carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa
que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e
quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a
tabela a seguir:
- Carros populares (aluguel de R$90 por dia)
- Até 100Km percorridos: R$0,20 por Km
- Acima de 100Km percorridos: R$0,10 por Km
- Carros de luxo (aluguel de R$150 por dia)
- Até 200Km percorridos: R$0,30 por Km
- Acima de 200Km percorridos: R$0,25 por Km

Data 09/10/2025 -> 18ª Dia
'''

carro = str(input('Que tipo de carro pretendes alugar (popular/luxo): ')).lower()
dias = int(input('Quantos dias vais alugar o carro: '))
km = float(input('Quantos km foram percorridos: '))

if carro == 'popular':

    aluguel_base = dias * 90
    if km <=  100:
        custo_km = km * 0.20
    else:
        custo_km = km * 0.10
elif carro == 'luxo':
    aluguel_base = dias * 150
    if km <=  200:
        custo_km = km * 0.30
    else:
        custo_km = km * 0.10
else:
    print('Tipo de carro inválido! Use "popular" ou "luxo"')
    exit()

    
total = aluguel_base + custo_km

print(f'\n--- EXTRATO DO ALUGUEL ---')
print(f'Tipo de carro: {carro.upper()}')
print(f'Dias alugados: {dias}')
print(f'KM percorridos: {km} km')
print(f'Aluguel base: R$ {aluguel_base:.2f}')
print(f'Custo por KM: R$ {custo_km:.2f}')
print(f'{"-" * 25}')
print(f'TOTAL A PAGAR: R$ {total:.2f}')