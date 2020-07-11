def printTest(N,p,q,r):
    if N>=1 and N<=10**5 and p>=1 and p<=10**5 and q>=1 and q<=10**5 and r>=1 and r<=10**5:
        A=list()
        B=list()
        C=list()
        D=list()
        E=list()

        D.append(p)
        D.append(q)
        D.append(r)
        D.sort()

        p=D[0]
        q=D[1]
        r=D[2]


        count=0

        for i in range(int(N/p)):
            A.append((i+1)*p)

        for i in range(int(N/q)):
            B.append((i+1)*q)

        for i in range(int(N/r)):
            C.append((i+1)*r)

        E=A+B+C
        E.sort()
        F=list()
        F=E

        i=0

        while i<len(E):
            if E[i]==E[i+1]:
                E.remove(E[i])
            i+=1


        print(E)
        i=0

        while i<len(E):
            if E[i]%p==0 or E[i]%q==0 or E[i]%r==0:
                count+=1
            i+=1







        '''for i in range(len(A)):
            temp=1
            if A[i] in B or A[i] in C:
                if A[i] in B:
                    B.remove(A[i])
                if A[i] in C:
                    C.remove(A[i])

                temp+=1

            if temp==1:
                count+=1

        for i in range(len(B)):
            temp=1
            if B[i] in C:
                C.remove(B[i])
                temp+=1
            if temp==1:
                count+=1'''

        print(count)




t=int(input())
if t>=1 and t<=10:

    N=list()
    p=list()
    q=list()
    r=list()

    for i in range(t):
        st=list(map(int,input().split()))
        N.append(st[0])
        p.append(st[1])
        q.append(st[2])
        r.append(st[3])

    for i in range(t):
        printTest(N[i],p[i],q[i],r[i])
