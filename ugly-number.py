def check(N):
    flag=1
    n=N
    while N>1:
        if N%2==0:
            N=int(N/2)
            continue
        elif N%3==0:
            N=int(N/3)
            continue
        elif N%5==0:
            N=int(N/5)
            continue
        else :
            flag=0
            break

    if flag==1:
        return True
    else :
        return False


t=int(input())
if t>=1 and t<=10**4:
    N=list()
    for i in range(t):
        N.append(int(input()))


    for i in range(t):
        if N[i]>=1 and N[i]<=10**4:
            j=1
            count=1
            while count<=N[i] :
                if check(j):
                    count+=1
                j+=1
            print(j-1)
