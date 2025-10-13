'''Faça um algoritmo que pergunte ao usuário um número inteiro e positivo 
qualquer e mostre uma contagem até esse valor: 
Ex: Digite um valor: 35 
Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!

Data 13/10/2025 -> 21ª Dia
'''

num = int(input('Digite um número: '))

cont = 0

while cont <= num:
    print(cont)
    cont += 1

print('Acabou!')