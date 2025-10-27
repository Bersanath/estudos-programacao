'''Faça um programa usando a estrutura “para” que leia um número inteiro 
positivo e mostre na tela uma contagem de 0 até o valor digitado: 
Ex: Digite um valor: 9 
Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM! 

Data 27/10/2025 -> 34ª Dia
'''


num = int(input('Digite um valor: '))

for i in range(0,num + 1):
    print(i ,end=" ")
print('FIM!')