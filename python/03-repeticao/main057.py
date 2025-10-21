''' Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. 
No final, mostre o total de salários pagos aos homens e o total pago às 
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não 
sempre que ler os dados de um funcionário.

Data 21/10/2025 -> 29ª Dia
'''

total_homem = 0
total_mulher = 0
while True:

    salario = float(input('Digite o salario do funcionario: '))
    sexo = str(input('Digite o sexo do funcionario: ')).lower()
    
    if sexo == 'm':

        total_homem += salario

    elif sexo == 'f':

        total_mulher += salario
    opcao = input('Deseja continuar? (s/n): ').lower()
    if opcao == 'n':
        break
print(f'O total de salario pago aos Homens foi: {total_homem}')
print(f'O total de salario pago ás Mullheres foi: {total_mulher}')