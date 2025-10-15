'''O programa acima vai ter um problema quando digitarmos o primeiro valor 
maior que o último. Resolva esse problema com um código que funcione em qualquer 
situação.

Data 15/10/2025 -> 23ª Dia
'''

primeiro = int(input('PRIMEIRO VALOR: '))
ultimo = int(input('ULTIMO VALOR: '))
incremento = int(input('INCREMENTO: '))

if primeiro < ultimo:
    cont = primeiro
    while cont <= ultimo:
        print(cont )
        cont += incremento
else:
    cont = primeiro
    while cont >= ultimo:
        print(cont)
        cont -= incremento
        