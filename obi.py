n = int(input())
k = int(input())

lista_comp = []

for i in range(n):
    p = int(input())
    lista_comp.append(p)

lista_comp.sort(reverse=True)

count = k
n_comp = 0
lenght = len(lista_comp)

for i in range(k, lenght):
    if lista_comp[k-1] == lista_comp[i]:
        n_comp +=1

print(n_comp + k)

