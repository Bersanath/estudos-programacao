'''Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
jogador vai tentar descobrir qual foi o valor sorteado.

Data 07/10/2025 -> 15ª Dia
'''

import random

print("OLÁ SOU O SEU COMPUTADOR VOU GERAR UM NÚMERO ALEATÓRIO E TENTA ADIVINHAR!")
computador = random.randint(1,5)

jogador = int(input('ESCOLHA O NÚMERO: '))

if(jogador == computador):

    print(f'VOCÊ ACERTOU O NÚMERO QUE EU GEREI PARABÉNS!')

else:

    print(f'VOCÊ PERDEU! O NÚMERO QUE EU PENSEI É {computador}')