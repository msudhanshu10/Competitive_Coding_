st=list(map(int,input().split()))
N=st[0]
K=st[1]
if N>=2 and N<=2*10**5 and K<=N*(N-1)/2 and K>=1:

    A=list(map(int,input().split()))
    #if max(A)<=10**9 and min(A)>=10**(-9):
    P=list()
    i=0
    while i<N-1:
        j=i+1
        while j<N:
            P.append(A[i]*A[j])
            j=j+1
        i=i+1

    P.sort()
    print(P[K-1])
