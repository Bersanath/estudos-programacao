''' Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando 
no final: 
a) Qual foi a média de altura do grupo 
b) Quantas pessoas pesam mais de 90Kg 
c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m 
d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg. 


Data 19/10/2025 -> 27ª Dia
'''

cont = 0
media_altura = 0
soma = 0
mais_90 = 0
menos_50 = 0
mais_190 = 0

while cont < 7:

    peso = float(input('digite o seu Peso: '))
    altura = float(input('Digite a sua Altura: '))

    soma += altura
    if peso > 90:
        mais_90 += 1
    if peso < 50 and altura < 1.60:
        menos_50 += 1
    if altura > 1.90 and peso > 100:
        mais_90 += 1
    cont +=1


media_altura = soma / cont
print(f'A media de altura do grupo é: {media_altura}')
print(f'São mais de {mais_90} pessoa que pesam 90kg')
print(f'São menos de {menos_50} pessoa que pesam 50kg e tem menos de 1.60m')
print(f'São mais de {mais_190} mede/medem 1.90 e tem mais de 100kg')