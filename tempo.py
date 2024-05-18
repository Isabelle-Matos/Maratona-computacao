A, B, C = [int(i) for i in input().split()]

lista = [A,B,C]

lista.sort()

if lista[0] + lista[1] == lista[2] or lista[0] == lista[2] or lista[1] == lista[2]:
    print('S')
else:
    print('N')