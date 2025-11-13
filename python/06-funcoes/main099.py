'''Faça um programa que possua uma função chamada Potencia(), que vai receber 
dois parâmetros numéricos (base e expoente) e vai calcular o resultado da 
exponenciação. 
Ex: Potencia(5,2) vai calcular 5 * 2 = 25  


Data 12/11/2025 -> 50ª Dia
'''


def Potencia(base, expoente):
    resultado = 1
    for i in range(expoente):
        resultado = resultado * base
    return resultado

base = int(input('Digite a base: '))
expoente = int(input('Digite o expoente: '))
print(f"{base}^{expoente} = {Potencia(base, expoente)}")