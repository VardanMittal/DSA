n = 5
ch = 'A'

for i in range(n):
    for j in range(i + 1):
        print(ch, end=" ")
    print()
    ch = chr(ord(ch)+1)