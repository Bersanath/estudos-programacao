'''' Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela 
qual foi o maior e qual foi o menor preço digitados.

Data 18/10/2025 -> 26ª Dia
'''

maior = 0
menor = 0
for i in range(8):
    produto = float(input('Digite o preço do produto: '))

    if produto > maior:
        maior = produto

    elif produto < menor:
        menor = produto

print(f'O maior produto digitado é: {maior}')
print(f'O menor produto digitado é: {menor}')