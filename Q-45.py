def countZero(A,N):
    if N>=1 and N<=30:
        count=0
        for i in range(N):
            if int(A[i])==0 or int(A[i])==1:
                if int(A[i])==0:
                    count+=1
            else :
                return -1

    return count


t=int(input())
if t>=1 and t<=100:
    N=list()
    arr=list()
    for i in range(t):
        N.append(int(input()))
        arr.append((input().split()))

    for i in range(t):
        if arr[i][N[i]-1]==1:
            print('0')
        else :
            print(countZero(arr[i],N[i]))
