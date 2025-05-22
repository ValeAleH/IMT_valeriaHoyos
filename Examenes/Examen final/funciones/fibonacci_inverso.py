def fibonacci(n):
    if n == 0:
        print("[]")
        return
    fib = [0, 1]
    for _ in range(2, n):
        fib.append(fib[-1] + fib[-2])
    print(", ".join(map(str, fib[n-1::-1])))
