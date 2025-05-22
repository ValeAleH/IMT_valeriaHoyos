from funciones import divisores, triangulo_letras, primos, fibonacci_inverso

def mostrar_menu():
    print("\nMENÚ DE FUNCIONES")
    print("1. Suma de divisores propios")
    print("2. Triángulo de letras")
    print("3. Primeros N números primos")
    print("4. Fibonacci inversa")
    print("5. Salir")

while True:
    mostrar_menu()
    opcion = input("Seleccione una opción: ")

    if opcion == "1":
        n = int(input("Ingrese un número: "))
        divisores.suma_divisores(n)
    elif opcion == "2":
        n = int(input("Ingrese la altura: "))
        triangulo_letras.triangulo(n)
    elif opcion == "3":
        n = int(input("Ingrese cuántos primos mostrar: "))
        primos.mostrar_primos(n)
    elif opcion == "4":
        n = int(input("Ingrese la cantidad de términos: "))
        fibonacci_inverso.fibonacci(n)
    elif opcion == "5":
        print("¡Nos vemos!")
        break
    else:
        print("Opción no válida")
