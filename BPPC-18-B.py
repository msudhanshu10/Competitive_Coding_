st=list(map(int,input().split()))
N=st[0]
M=st[1]
K=list()
A=list()
if N>=1 and N<=30 and M>=1 and M<=30:
    smallest=M
    for i in range(N):
        st=list(map(int,input().split()))
        K.append(st[0])
        A.append(st[1:])
        if len(st[1:])<smallest:
            smallest=len(st[1:])
            key=i
    
    count=0
    flag=False
    for i in range(len(A[key])):
        ch=A[key][i]
        #print(ch)
        for j in range(N):
            #print(A[j])
            if ch in A[j]:
                flag=True
            else:
                flag=False
                break

        if flag==True:
            count=count+1

    print(count)
    

    



        


