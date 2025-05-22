def triangulo(n):
    for i in range(1, n + 1):
        linea = " ".join([chr(65 + j) for j in range(i)])
        print(linea)
