n = 5

for i in range(n):
    # spaces
    for j in range(n - i - 1):
        print(" ", end=" ")
    for k in range(i + 1):
        print(chr(ord('A') + k), end= " ")
    for l in range(i):
        print(chr(ord('A') + l), end=" ")
    print()