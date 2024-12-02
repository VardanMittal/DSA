n = 5

for i in range(n):
    for j in range(i+1):
        val = chr(ord('A') + j)
        print(val, end=" ")
    print()