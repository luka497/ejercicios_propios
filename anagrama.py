p1 = input("palabra 1: ")
p2 = input("palabra 2: ")
flag = True

if(p1==p2) or (len(p1) != len(p2)):
   flag = False

largo = 0

for i in range(len(p1)):
   if p1[i] in p2:
      largo += 1
if largo == len(p1) == len(p2):
   flag = True

if flag:
   print("La palabra 1 y la pabra 2 son anagramas.")
else:
   print("Las palabras no son anagramas.")