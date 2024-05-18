# A, B, C, D = [int(i) for i in input().split()]

# if A == B and B == C and C == D:
#     maior = A
# else:
#     maior = max(A,B,C,D) # O(n)

# valor = 0

# if A%2 == 0 and B%2 == 0 and C%2 == 0 and D%2 == 0:
#     for i in range(2, maior+1, 2):
#         if i%A == 0 and i%B != 0 and C%i == 0 and D%i != 0:
#             valor = i
#             break

# elif A%2 != 0 and B%2 != 0 and C%2 != 0 and D%2 != 0:
#     for i in range(1, maior+1, 2): # O(n)
#         if i%A == 0 and i%B !=0 and C%i == 0 and D%i != 0: # O(1)
#             valor = i
#             break
        
# else:
#     for i in range(1, maior+1): # O(n)
#         if i%A == 0 and i%B !=0 and C%i == 0 and D%i != 0: # O(1)
#             valor = i
#             break

# if valor == 0: # O(1)
#     print(-1)
# else: 
#     print(valor)