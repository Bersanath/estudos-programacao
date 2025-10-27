'''Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura 
“para”. No final, mostre na tela: 
a) Quantas mulheres foram cadastradas 
b) Quantos homens pesam mais de 100Kg 
c) A média de peso entre as mulheres  
d) O maior peso entre os homens 

Data 27/10/2025 -> 34ª Dia
'''

homens_peso = 0
mulheres = 0
media_peso = 0
soma = 0
peso_homens = 0
for i in range(3):
    sexo = str(input('Digite o seu sexo (f/m): ')).lower()
    peso = float(input('Digite o seu peso: '))
    
    if sexo == 'f':
        mulheres += 1
        soma += peso
    if sexo == 'm':
        if peso > 100:
            homens_peso += 1
        if peso > peso_homens:
            peso_homens = peso
media_peso = soma / mulheres    
print(f'a) {mulheres} Mulheres foram cadastradas no sistema')
print(f'b) {homens_peso} Homens pesam mais de 100kg')
print(f'c) A média de peso entre as mulheres é: {media_peso}')
print(f'd) O maior peso entre os homens é: {peso_homens}')