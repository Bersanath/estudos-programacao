'''Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

Data 07/10/2025 -> 15ª Dia
'''

print('=== Jogo de JoKenPo - Pedra, Papel ou Tesoura ===')


jogador1 = (input('JOGADOR_1: PEDRA-PAPEL-TESOURA: ')).lower()
jogador2 = (input('JOGADOR_1: PEDRA-PAPEL-TESOURA: ')).lower()

if jogador1 == jogador2:

    print('EMPATE!')

elif jogador1 == 'pedra' and jogador2 == 'tesoura':

    print('Jogador 1 vence, porque Pedra quebra a Tesoura!')

elif jogador2 == 'pedra' and jogador1 == 'tesoura':

    print('Jogador 2 vence, porque Pedra quebra a Tesoura!')

elif jogador1 == 'papel' and jogador2 == 'pedra':

    print('Jogador 1 vence, porque Papel embrulha a Pedra!')

elif jogador2 == 'papel' and jogador1 == 'pedra':

    print('Jogador 2 vence, porque Papel embrulha a Pedra!')

elif jogador1 == 'tesoura' and jogador2 == 'papel':

    print('Jogador 1 vence, porque Tesoura corta o Papel!')

elif jogador2 == 'tesoura' and jogador1 == 'papel':

    print('Jogador 2 vence, porque Tesoura corta o Papel!')

else:

    print('Alguém digitou algo errado! Use apenas: pedra, papel ou tesoura')