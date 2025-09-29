'''Escreva um programa para calcular a redução do tempo de vida de um 
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele 
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule 
quantos dias de vida um fumante perderá e exiba o total em dias.

Data 29/09/2025 -> 8ª Dia
'''

print("=== CALCULADORA DE TEMPO DE VIDA PERDIDO ===")

cigarro_por_dia = int(input('Quantos cigarros fuma por dia? '))
anos_fumado = int(input('Há quantos anos fuma? '))

total_cigarro = cigarro_por_dia * 365 * anos_fumado
minutos_perdidos = total_cigarro * 10
dias_perdidos = minutos_perdidos / (24*60)

print('--- RESULTADO ---')
print(f'Cigarros fumados na vida: {total_cigarro}')
print(f'Minutos de vida perdidos: {minutos_perdidos}')
print(f'Dias de vida perdidos: {dias_perdidos:.1f}')
print(f'Você perdeu aproximadamente {dias_perdidos:.0f} dias de vida!')