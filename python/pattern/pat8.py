n = 5
for i in range(n):
    # space
    for j in range(i):
        print(" ", end="")

    # star 1
    for k in range(n - i):
        print("*",end="")
    
    # star 2
    for l in range(n - i - 1):
        print("*",end="")
    print()