'''Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 185.72m corresponde a:
0.18572Km
1.8572Hm
18.572Dam

Data 25/09/2025 -> 4ª Dia
'''

distancia = float(input('Digite uma distância em metro: '))

km = distancia / 1000
hm = distancia / 100
dam = distancia / 10

print(f'A distância de {distancia}m corresponde a:')
print(f'{km}Km')
print(f'{hm}Hm')
print(f'{dam}Dam')