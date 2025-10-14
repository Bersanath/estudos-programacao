'''Crie um algoritmo que leia o valor inicial da contagem, o valor final e o 
incremento, mostrando em seguida todos os valores no intervalo: 
Ex: Digite o primeiro Valor: 3 
Digite o último Valor: 10 
Digite o incremento: 2 
Contagem: 3 5 7 9 Acabou!

Data 14/10/2025 -> 22ª Dia
'''

primeiro_valor = int(input('PRIMEIRO VALOR: '))
ultimo_valor = int(input('ULTIMO VALOR: '))
incremento = int(input('INCREMENTO: '))

if primeiro_valor < ultimo_valor:
    cont = primeiro_valor
    while cont <= ultimo_valor:
        print(cont)
        cont += incremento
else:
    cont = primeiro_valor
    while cont >= ultimo_valor:
        print(cont)
        cont -= incremento

print('Acabou!')