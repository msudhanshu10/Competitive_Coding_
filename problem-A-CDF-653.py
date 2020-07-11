def maxmod(x,y,n):
    i=n
    k=0
    while i>=0:
        if i%x==y:
            k=i
            break
        i=i-1
    return k



t=int(input())
if t>=1 and t<=(5*(10**4)):
    x=list()
    y=list()
    n=list()

    for i in range(t):
        st=list(map(int,input().split()))
        x.append(st[0])
        y.append(st[1])
        n.append(st[2])

    for i in range(t):
        if x[i]>=2 and x[i]<=10**9 and y[i]>=0 and y[i]<x[i] and n[i]>=y[i] and n[i]<=10**9:
            print(maxmod(x[i],y[i],n[i]))
