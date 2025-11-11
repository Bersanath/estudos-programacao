''' Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma 
adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o 
maior entre eles.

Data 11/11/2025 -> 49ª Dia
'''

def Maior(num1,num2,num3):
    maior = 0
    if num1 > num2 and num1 > num3:
        maior = num1
    elif num2 > num3 and num2 > num1:
        maior = num2
    elif num3 > num1 and num3 > num2:
        maior = num3
    return maior
num1 = int(input('Digite o primeiro numero: '))
num2 = int(input('Digite o segundo numero: '))
num3 = int(input('Digite o terceiro numero: '))
print(Maior(num1,num2,num3))