def count(A):
    B=dict()
    k=0
    for i in range(len(A)):
        B[abs(A[i])]=k
        k+=1

    return len(B)

    

    


t=int(input())
if(t>=1 and t<=100):
    A=list()
    N=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=30:
            print(count(A[i]))