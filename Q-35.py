def noOfTest():
    T=int(input())
    return T

T=noOfTest()
A=list()
B=list()
for i in range(T):
    len=input()
    len.split()
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    A.append(a)
    B.append(b)

len1=list()
len2=list()

for i in range(T):
    len1.append(0)
    len2.append(0)

for k in range(T):
    for i in A[k]:
        len1[k]=len1[k]+1
    for j in B[k]:
        len2[k]=len2[k]+1

C=list()
D=list()
for k in range(T):
    for i in range(len1[k]+len2[k]-1):
        D.append(0)
    C.append(D)

for k in range(T):
    for i in range(len1[k])
        for j in range(len2[k]):
            C[k][i+j]=C[k][i+j]+A[k][i]*B[k][j]

    for i in range(len1[k]+len2[k]-1):
        print(C[k][i],end=" ")
    print()
    for i in range(len1[k]+len2[k]-1):
        C[k][i]=0
