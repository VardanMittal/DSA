n = 5

for i in range(n):
    for j in range(n - i):
        val = chr(ord('A')+j)
        print(val, end=" ")
    print()