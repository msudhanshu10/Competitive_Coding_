#https://practice.geeksforgeeks.org/problems/maximum-index/0
def maximumIndex(A):
    N=len(A)
    print(N)
    index=0
    for k in range(N):
        if A[k]>=0 and A[k]<=10**18:
            i=0
            while i<=k:
                if A[N-1-k+i]>A[i]:
                    index=N-1-k
                    break
                i+=1
            if index!=0:
                break

    return index

t=int(input())
if t>=1 and t<=1000:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        test=list(map(int,input().split()))
        A.append(test)

    for i in range(t):
        if N[i]>=1 and N[i]<=1000:
            print(maximumIndex(A[i]))
