print("¿Es primo?")


def Primo(numero, cantidad):
   for i  in range(cantidad):
    if (i != 0) and (i != 1 ) and (i != numero) and ( numero % i == 0):
        return True
    
cantidad = int(input("¿cuantos numeros primos quieres conocer?: "))
primos = []
for i in range(cantidad):
    primos.append(i)
    if Primo(i,cantidad):
      primos.remove(i)
      
print(primos)