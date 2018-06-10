def inp():
    n = int(input())
    figst = list(map(int, input().split()))
    return n, figst

#print(inp())

def pA(n, figst, k=0):
    j = 0
    st = 0
    for i in range(1, n//2 + 1):
        #print(i, figst[j], abs(figst[j] - (i * 2 - k)))
        st += abs(figst[j] - (i * 2 - k))
        j += 1
    return st

def A(n, figst):
    return min(pA(n, figst), pA(n, figst, 1))



#print(A(*inp()))
#print(A(4, [1,4]))

def inpb():
    n, m = list(map(int, input().split()))
    lmps = []
    for i in range(n):
        lmps.append(input())
    
    return n, m, lmps

def B(n,m,lmps):
    alamps = [0] * m
    for j in range(m):
        s = 0
        for i in range(n):
            s += int(lmps[i][j])
            if s == 1 and int(lmps[i][j]) == 1:
                alamps[j] = i + 1
            if s > 1:
                alamps[j] = 0
                break
    #print(alamps)
    if sum(range(1,n + 1)) == sum(alamps):
        return 'NO'
    return 'YES'

print(B(*inpb()))









