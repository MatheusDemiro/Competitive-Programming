q = int(input())
for i in range(q):
    n,k = list(map(int, input().split()))
    c = list(input())
    qtd1 = 0
    for i in range(n):
        if c[i] == '1':
            qtd1+=1
        elif k > 0:
            if qtd1 == 0:
                continue            
            elif c[i] == '0' and k >= qtd1:
                c[(i+1)-qtd1-1] = '0'
                c[i] = '1'
                k-=qtd1
            else:
                c[i-k] = '0'
                c[i] = '1'
                break
    print("".join(c))
