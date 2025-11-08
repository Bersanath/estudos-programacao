'''Crie uma lógica que leia um número inteiro e passe para um procedimento 
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como 
parâmetro é PAR ou ÍMPAR. 

Data 08/11/2025 -> 46ª Dia
'''

def ParOuImpar(num):
    if num % 2 == 0:
        print(f'O valor {num} é Par!')
    else:
        print(f'O valor {num} é Impar!')

num = int(input('Digite um valor: '))
ParOuImpar(num)