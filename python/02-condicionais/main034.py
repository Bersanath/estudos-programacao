'''O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o
indivíduo dentro de certas faixas.
- abaixo de 18.5: Abaixo do peso
- entre 18.5 e 25: Peso ideal
- entre 25 e 30: Sobrepeso
- entre 30 e 40: Obesidade
- acima de 40: Obseidade mórbida
Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado
da altura)

Data 08/10/2025 -> 16ª Dia
'''

altura = float(input('Digite a sua altura: '))
peso = float(input('Digite o seu peso: '))

imc = peso / (altura * altura)

print(f'Seu IMC: {imc}')

if imc < 18.5:

    print('ABAIXO DO PESO!')

elif imc < 25:
    
    print('PESO IDEAL!')

elif imc < 30:

    print('SOBREPESO!')

elif imc <= 40:

    print('OBESIDADE!')

else:

    print('OBESIDADE MORBIDA!')