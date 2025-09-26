'''Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.

Data 26/09/2025 -> 5ª Dia
'''

dinheiro = float(input('Quanto dinheiro tens carteira: '))

dolar = dinheiro / 3.45

print(f"Com R${dinheiro} posso comprar US${dolar:.2f}")