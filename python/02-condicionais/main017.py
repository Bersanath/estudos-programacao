'''Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.

Data 30/09/2025 -> 9ª Dia
'''

print("=== CALCULANDO VELOCIDADE DE UM CARRO ===")
velocidade = float(input('Digite a velocidade em km/h: '))

if velocidade > 80:
    print('Você foi multado!')
    excesso = velocidade - 80
    multa = excesso * 5
    print(f'Velocidade registrada: {velocidade}km/h')
    print(f'Execesso {excesso}km/h')
    print(f'A sua multa é de: R${multa:.2f}')
else:
    print('Velocida dentro do limite. Dirija com segurança!')