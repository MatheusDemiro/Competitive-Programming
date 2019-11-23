q = int(input())
 
for j in range(q):
    n = int(input())
    a = list(map(int,input().split()))
    days = []
    for i in range(n):
        f = a[a[i]-1]
        if a[i] == f:
            days.append(1)
            continue
        if f-1 == i:
            days.append(2)
            continue
        else:
            child = a[f-1]
            count = 2
            for j in range(2, n):
                count+=1
                if child-1 == i:
                    days.append(count)
                    break
                child = a[child-1]
    print(" ".join(str(x) for x in days))
