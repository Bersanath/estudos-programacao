'''[DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
Analise seus comprimentos e diga se é possível formar um triângulo com essas
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois.

Data 04/10/2025 -> 12ª Dia
'''

num1 = float(input('Premeiro Segmento: '))
num2 = float(input('Segundo Segmento: '))
num3 = float(input('Terceiro Segmento: '))

if num1 + num2 > num3:
    print('É possível formar um Triângulo!')

elif num1 + num3 > num2:
    print('É possível formar um Triângulo!')

elif num2 + num3 > num1:
    print('É possível formar um Triângulo!')

else:
    print('Não é possível formar um Triângulo!')