
def printArray(A,n):
    print(A)
    for i in range(n):
        print(A[i],end=" ")
    print()

t=int(input())
if t>=1 and t<=500:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=10**6:
            print(type(A[i]))
            printArray(A[i].sort(),N[i])
