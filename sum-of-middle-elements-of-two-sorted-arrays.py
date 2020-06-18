def sumMiddle(A):
    A.sort()
    L=len(A)
    S=A[int((L-1)/2)]+A[int(((L-1)/2))+1]
    return S

t=int(input())
if t>=1 and t<=50:
    N=list()
    A=list()
    B=list()
    C=list()

    for i in range(t):
        N.append(int(input()))
        test=list(map(int,input().split()))
        A.append(test)
        test=list(map(int,input().split()))
        B.append(test)
        C.append((A[i]+B[i]))

    for i in range(t):
        if N[i]>=1 and N<=10**3:
            print(sumMiddle(C[i]))
