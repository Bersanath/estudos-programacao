''' Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que mostre uma mensagem personalizada, passada como parâmetro. 
Ex: Ao chamar Gerador("Aprendendo Portugol") aparece: 
+-------=======------+ 
Aprendendo Portugol         
+-------=======------+

Data 06/11/2025 -> 44ª Dia
'''

def gerador(mensagem):
    print('+--------=====--------+')
    print(mensagem)
    print('+--------=====--------+')
gerador('Aprendendo Python')
