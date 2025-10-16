'''Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 
450 + 400 + 350 + 300 + ... + 50 + 0

Data 16/10/2025 -> 24ª Dia
'''

#for i in range(500,0,-50):
 #   print(i)

cont = 500
somatorio = 0
while cont >= 0:
    somatorio += cont
    cont -= 50

print(somatorio)