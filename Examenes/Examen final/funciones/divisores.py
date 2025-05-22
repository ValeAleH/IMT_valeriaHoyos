def suma_divisores(n):
    suma = sum([i for i in range(1, n) if n % i == 0])
    print(f"Suma de divisores de {n}: {suma}")
