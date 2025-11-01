''' Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No 
final, mostre uma listagem com todos os nomes informados, na ordem inversa 
daquela em que eles foram informados.


Data 01/11/2025 -> 39ª Dia
'''

lista = []

for i in range(7):
    nome = str(input('Digita o seu nome: '))
    lista.append(nome)
lista.reverse()
print(lista)