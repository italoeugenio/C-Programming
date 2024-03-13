import random

numero_de_tentativas = 4

AdivinharNumero = random.randrange(0, 11)

tentativas = numero_de_tentativas

while tentativas > 0:
    chute = int(input("Adivinhe o número de 0 até 10: "))
    if chute == AdivinharNumero:
        print("Você acertou")
        break
    elif chute < AdivinharNumero:
        print("O número é maior")
    else:
        print("O número é menor")
    tentativas -= 1
    print("Você ainda tem {} tentativas.\n".format(tentativas))

if tentativas == 0:
    print("Sorry man, acabou as tentativas =/")
