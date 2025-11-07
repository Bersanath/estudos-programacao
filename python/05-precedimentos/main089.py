'''Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que o programador possa escolher uma entre três bordas: 
+-------=======------+ Borda 1 
~~~~~~~~:::::::~~~~~~~ Borda 2 
<<<<<<<<------->>>>>>> Borda 3 
Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2) 
~~~~~~~~:::::::~~~~~~~ 
Portugol Studio 
Portugol Studio 
Portugol Studio 
~~~~~~~~:::::::~~~~~~~

Data 07/11/2025 -> 45ª Dia
'''

def gerador(mensagem, repeticoes, borda):
    if borda == 1:
        print('+-------=======------+')
    elif borda == 2:
        print('~~~~~~~~:::::::~~~~~~~')
    elif borda == 3:
        print('<<<<<<<<------->>>>>>>')
    
    for i in range(repeticoes):
        print(mensagem)
    
    if borda == 1:
        print('+-------=======------+')
    elif borda == 2:
        print('~~~~~~~~:::::::~~~~~~~')
    elif borda == 3:
        print('<<<<<<<<------->>>>>>>')

gerador("Portugol Studio", 3, 2)