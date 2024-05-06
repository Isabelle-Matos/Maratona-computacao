n = int(input())
lista_numeros = [int(x) for x in input().split()]

lista_numeros.sort()

lista = []
for i in range(1, n+1):
    lista.append(i)


num = set(lista).difference(lista_numeros)
num = list(num)[0]

print(num)