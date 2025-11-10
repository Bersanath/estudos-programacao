'''Refaça o exercício 90, só que agora em forma de função Somador(), que vai 
receber dois parâmetros e vai retornar o resultado da soma entre eles para o 
programa principal.

Data 10/11/2025 -> 48ª Dia
'''

def Somador(num1,num2):

    return num1 + num2

num1 = int(input('Digite o primeiro número: '))
num2 = int(input('Digite o segundo número: '))

resultado = Somador(num1,num2)
print(resultado)