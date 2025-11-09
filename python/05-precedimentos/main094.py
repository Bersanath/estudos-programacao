'''[DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado 
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos 
termos da sequência serão mostrados na tela. O seu procedimento deve receber 
esse valor e mostrar a quantidade de elementos solicitados. 
Obs: Use os exercícios 70 e 75 para te ajudar na solução 
Ex:  
Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM 
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM 

Data 09/11/2025 -> 47ª Dia
'''

def Fibonacci(valor):
    anterior = 0
    atual = 1

    print(atual,end=' ')

    for i in range(1,valor):
        proximo = anterior + atual
        print(f'>>{proximo} ',end=' ')
        anterior = atual
        atual = proximo
    print('>>FIM')
num = int(input('Digite um número: '))
Fibonacci(num)