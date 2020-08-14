def reducedArray(A,N):
    B=dict()
    for i in range(N):
        B[A[i]]=i

    C=dict()
    i=0

    for k,v in sorted(B.items()):
        C[v]=i
        i+=1

    for k,v in sorted(C.items()):
        print(C[k],end=" ")
    print()
    

    
t=int(input())
if(t>=1 and t<=100):
    A=list()
    N=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=200 and max(A[i])>=1 and max(A[i])<=1000:
            reducedArray(A[i],N[i])
