def binarySearch(n,k):
    l = 1
    r = n
    value = float('inf')
    while l <= r:
        mid = (l+r)//2
        s = mid
        exp = 1
        while 1:
            div = mid//(k**(exp))
            if div == 0:
                break
            s+=div
            exp+=1
        if s == n:
            return mid
        if s < n:
            l = mid + 1
        else:
            if value > mid:
                value = mid
            r = mid - 1
    return value
 
n,k = list(map(int, input().split()))
print(binarySearch(n,k))
