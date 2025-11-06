'''Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que mostre uma mensagem vário 
Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece: 
+-------=======------+ 
Aprendendo Portugol  
Aprendendo Portugol  
Aprendendo Portugol  
Aprendendo Portugol  
+-------=======------+

Data 06/11/2025 -> 44ª Dia
'''

def gerador(mensagem):
    print('+--------=====--------+')
    for i in range(4):
        print(mensagem)
    print('+--------=====--------+')
gerador('Aprendendo Python')