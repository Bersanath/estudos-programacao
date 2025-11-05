'''Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e 
guarde esses dados em três vetores. No final, mostre uma listagem contendo 
apenas os dados das funcionárias mulheres que ganham mais de R$5 mil. 

Data 05/11/2025 -> 43ª Dia
'''


nomes = []
sexos = []
salarios = []
ganhos_nome = []
ganhos_salario = []
for i in range(5):
    nome = str(input('Digite o seu nome: '))
    sexo = str(input('Digite o seu sexo(h/m): ')).lower()
    salario = float(input('Digite o seu salario: '))

    nomes.append(nome)
    sexos.append(sexo)
    salarios.append(salario)

    if sexo == 'm' and salario > 5000:

        ganhos_nome.append(nome)
        ganhos_salario.append(salario)
print(f'A listagem de das funcionarias que ganham mais de 5mil: Nomes: {ganhos_nome} Salarios: {ganhos_salario}')
