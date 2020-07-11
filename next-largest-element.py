def generateList(A):
    B=list()
    flag=0

    for i in range(len(A)-1):

        j=i+1
        while j<len(A):
            if A[j]>A[i]:
                B.append(A[j])
                flag=1
                break
            j+=1
        if flag==0:
            B.append(-1)
    B.append(-1)
    for i in range(len(B)):
        print(B[i],end=' ')

    print()

t=int(input())
if t>=1 and t<=100:
    N=list()
    A=list()
    B=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=10**7:
            generateList(A[i])
