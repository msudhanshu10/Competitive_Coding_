
def printGems(N,A):
    B=list()
    for i in range(N):
        B.append((A[i],i))
    B.sort()
    for i in N:
        prod=prod*B[i ]

t=int(input())
if t>=1 and t<=10:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=10**5:
            printGems(N[i],A[i])
