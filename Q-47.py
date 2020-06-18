def winner(A):
    min=None
    flag=0

    for i in range(len(A)):
        
        if min==None:
            min=int(A[i])
        elif int(A[i])>=min:
            flag=1
        else:
            if flag==1:
                return i
                break
            min=int(A[i])

n=int(input())
k=int(input())
if n>=k and n<=50 and k>=1 and k<=n:
    A=input().split()
    print(A)
    print(winner(A))
