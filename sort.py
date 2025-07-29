N = [1, 4, 7, 8, 3, 2, 5, 6, 0]

for i in range (len(N)):
    m = i
    for j in range(len(N)):
        if (N[m]< N[j]):
            N[m],N[j] =N[j],N[m]
print(N)