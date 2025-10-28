'''Faça um programa que mostre os 10 primeiros elementos da Sequência 
de Fibonacci: 
1 1 2 3 5 8 13 21...

Data 28/10/2025 -> 35ª Dia
'''

anterior = 1
atual = 1

print(anterior, end=" ")
print(atual, end=" ")
for i in range(10):
    proximo = anterior + atual
    print(proximo,end=" ")
    anterior = atual
    atual = proximo