n = 5

for i in range(n):
    for j in range(i + 1):
        print(j+1, end="")
    for k in range(n - i - 1):
        print(" ",end="")
        print(" ",end="")
    for l in range(i + 1):
        print(i+l+1, end="")
    print()