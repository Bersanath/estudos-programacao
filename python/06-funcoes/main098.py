'''Crie um programa que tenha uma função SuperSomador(), que vai receber dois 
números como parâmetro e depois vai retornar a soma de todos os valores no 
intervalo entre os valores recebidos.
Ex:  
SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21 
SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85 

Data 11/11/2025 -> 49ª Dia
'''


def SuperSomador(num1,num2):
    soma = 0
    for i in range(num1,num2 + 1):
        soma += i
    return soma
num1 = int(input('Digite o primeiro número: '))
num2 = int(input('Digite o segundo número: '))
print(SuperSomador(num1,num2))