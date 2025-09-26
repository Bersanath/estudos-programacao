'''Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2metros quadrados.

Data 26/09/2025 -> 5ª Dia
'''

largura = float(input('Digite a Largura da Parede: '))
altura = float(input('Digite a Altura da parede: '))

area = largura * altura
quantidade = area / 2

print(f'A área a ser pintada é de {area}')
print(f'A quantidade de tinta necessária para o serviço é: {quantidade}')