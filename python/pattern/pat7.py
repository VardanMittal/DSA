n = 5

for i in range(n):
    # spaces
    for j in range(n-i-1):
        print(" ",end="")
    
    # star 1
    for k in range(i+1):
        print("*", end="")
    
    # star 2
    for l in range(i):
        print("*",end="")
    
    print()

