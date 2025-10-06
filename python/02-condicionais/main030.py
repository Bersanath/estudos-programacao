'''Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo
de triângulo será formado:
- EQUILÁTERO: todos os lados iguais
- ISÓSCELES: dois lados iguais
- ESCALENO: todos os lados diferentes

Data 06/10/2025 -> 14ª Dia
'''

num1 = float(input('PRIMEIRO SEGMENTO: '))
num2 = float(input('SEGUNDO SEGMENTO: '))
num3 = float(input('TERCEIRO SEGMENTO: '))

if (num1 < num2 + num3) and (num2 < num1 + num3) and (num3 < num1 + num2):

    print('OS SEGMENTOS FORMAM UM TRIÂNGULO ', end='')
    if num1 == num2 and num1 == num3:

        print('TRIÂNGULO EQUILÁTERO!')

    elif num1 == num2 or num2 == num3 or num3 == num1:

        print('TRIÂNGULO ISÓSCELES!')

    else:
        print('TRIÂNGULO ESCALENO!')

else:
    print('OS SEGMENTOS NÃO FORMAM UM TRIÂNGULO!')