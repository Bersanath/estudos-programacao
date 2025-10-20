'''[DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de 
agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4 
tentativas para tentar acertar.

Data 20/10/2025 -> 28ª Dia
'''

import random

print('Olá eu sou o seu computador vou gerar números aleatório de 1 até 10 tenta adevinhar!')

computador = random.randint(1,10)

tentativa = 0
acertou = True


while tentativa < 4 and not acertou:

    jogador = int(input(f'Tentativa {tentativa + 1}/4 - Digite seu palpite: '))

    if jogador == computador:
        print(f'PARABÉNS! Você acertou! O número era {computador}')
        acertou = True
    else:
        if jogador < computador:
            print('Tente um número MAIOR!')
        else:
            print('Tente um número MENOR!')
    
    tentativa += 1

if not acertou:
    print(f'Fim de jogo! O número era {computador}')