def printX(N,K,A):

    if max(A)>=1 and max(A)<=10**9:
        counter=0
        X=list()
        key=0

        largest=0

        for i in range(1,max(A)+1):
            s=bin(i)
            S=s[2:]

            counter=0
            counter=S.count('1')


            if counter!=K:
                continue
            else:
                X.append(i)


        for j in range(len(X)):

            newA=list(map(lambda i:i&X[j],A))


            if sum(newA)>largest:
                largest=sum(newA)
                key=X[j]

        return key






t=int(input())
if t>=1 and t<=1000:
    N=list()
    K=list()
    A=list()

    for i in range(t):
        st=list(map(int,input().split()))
        N.append(st[0])
        K.append(st[1])
        st=list(map(int,input().split()))
        A.append(st)

    for i in range(t):
        if N[i]>=1 and N[i]<=10**5 and K[i]>=1 and K[i]<=30:
            print(printX(N[i],K[i],A[i]))
