n = 5

for i in range(n):
    # space 
    for j in range(n - i - 1):
        print(" ",end="")
    # stars 1
    for j in range(i + 1):
        print("*",end="")
    # stars 2
    for j in range(i):
        print("*", end="")    
    print()

for i in range(n):
    for k in range(i):
        print(" ",end="")
    for k in range(n - i):
        print("*", end="")
    for k in range(n - i - 1):
        print("*",end="")
    print()