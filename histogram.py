def maxArea(N,A):
    i=N-1
    count=1
    while i>=0:
        x=A[i]
        
        
        

t=int(input())
if t>=1 and t<=100:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st)

    
    for i in range(t):
        if N[i]>=1 and N[i]<=10**5 and max(A[i])>=1 and max(A[i])<=10**4:
            print(maxArea(N[i],A[i]))