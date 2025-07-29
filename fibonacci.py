print("Seire de Fibonacci: ")
numeros = int(input("Cuantos numeros de la serie quieres: "))
i = 0
anterior = 1
fib = []
for contador in range(numeros):
    fib.append(i)
    i,anterior =  anterior ,  i + anterior
print(fib)
