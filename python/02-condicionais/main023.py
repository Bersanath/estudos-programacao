'''Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
para todos, mas especialmente para mulheres. Faça um programa que leia nome,
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
que:
- Homens ganham 5% de desconto
- Mulheres ganham 13% de desconto

Data 03/10/2025 -> 11ª Dia
'''

nome = str(input('Digite o seu nome: '))
sexo = str(input('Digite o seu sexo: '))
produto = float(input('Digite o valor do produtos: '))


if sexo == 'f' or sexo == 'F':
    desconto = produto - (produto * 13 / 100)
    print(f'Devido o dia da Mulher a loja oferece desconto de 13% para todas as mulheres o produto da senhora{nome} que está {produto} com o desconto de 13% vai custar {desconto}')
elif sexo == 'm' or sexo == 'M':
    desconto = produto - (produto * 5 / 100)
    print(f'Devido o dia da Mulher a loja oferece desconto de 5% para todos os homem o produto do senhor {nome} que está {produto} com o desconto de 5% vai custar {desconto}')
else:
    print('Sexo inválido!')