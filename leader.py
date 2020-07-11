def find_leader(A):
    max=-1
    B=list()
    for i in range((len(A)-1),-1,-1):
        if A[i]>max:
            max=A[i]
            B.append(A[i])

    for i in range((len(B)-1),-1,-1):
        print(B[i],end=" ")
    print()


t=int(input())
if t>=1 and t<=100:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=10**7:
            find_leader(A[i])
