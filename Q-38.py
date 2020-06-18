t=int(input())
if t>=1 and t<=100:
    N=list()
    for i in range(t):
        N.append(int(input()))

    for i in range(t):
        count=0
        if N[i]%5==0:
            count=-1
        else :
            count=N[i]%5
        print(count)
