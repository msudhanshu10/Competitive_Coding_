st=list(map(int,input().split()))
N=st[0]
M=st[1]
mat=list()
flag=1
if N>=2 and N<=1000 and M>=2 and M<=1000:
    for i in range(N):
        st=list(map(int,input().split()))
        mat.append(st)

    Q=int(input())
    if Q>=2 and Q<=1000:
        search=list()
        for i in range(Q):
            search.append(int(input()))

        for i in range(Q):
            flag=1
            for j in range(N):
                    if search[i] in mat[j]:
                        flag=1
                        print(j,mat[j].index(search[i]))
                        break
                    else:
                        flag=0
            if flag==0:
                print('-1 -1')
