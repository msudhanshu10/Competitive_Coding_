def count(A):
    B=A
    count=0
    while(len(A)>0):
        if("()" in A):
            B=A.replace("()","",1)
            A=B
            count=count+1
        else:
            break

    print(count*2)

t=int(input())
if t>=1 and t<=500:
    A=list()
    for i in range(t):
        A.append(input())

    for i in range(t):
        if len(A[i])>=1 and len(A[i])<=500:
            count(A[i])