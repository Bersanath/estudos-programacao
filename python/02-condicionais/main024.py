'''Faça um algoritmo que pergunte a distância que um passageiro deseja
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para
viagens até 200Km e R$0.45 para viagens mais longas.

Data 03/10/2025 -> 12ª Dia
'''

distancia = float(input('Digite qual distância o senhor dejesa percorrer: '))


if distancia <= 200:
    preco_passagem = distancia * 0.50
    print(f'Por estar dentro do limite de 200km, você vai pagar R${preco_passagem:.2f}')

else:
    preco_passagem = distancia * 0.45
    print(f'Por ultrapassar os 200km, você vai pagar R${preco_passagem:.2f}')