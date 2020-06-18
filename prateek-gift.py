
def max_price(PB):
    P=list()
    B=list()
    key=list()
    for k,v in PB:
        P.append(k)
        B.append(v)
    P.reverse()
    B.reverse()
    sum=0
    i=0
    while i<len(P):
        if P[i]>=1 and P[i]<=100 and B[i]>=1 and B[i]<=100:
            if B[i] in key:
                i=i+1
                continue
            else:
                key.append(B[i])
                sum+=P[i]
            i=i+1

    return sum



st=list(map(int,input().split()))
N=st[0]
M=st[1]

if N>=1 and N<=100 and M>=1 and M<=100:
    PB=list()
    for i in range(N):
        st=list(map(int,input().split()))
        PB.append((st[0],st[1]))

    print(max_price(sorted(PB)))
