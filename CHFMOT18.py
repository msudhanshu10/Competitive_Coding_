def isEven(n):
    if n%2==0:
        return True
    else:
        return False


def countMinCoins(S,N):
    if S==1:
        return 1
    else:
        count=int(S/N)
        S=S-(int(S/N)*N)
        while S>0:
            if (isEven(S) and S<=N) or S==1:
                count=count+1
                S=0
            else:
                count=count+2
                S=0

        return count




t=int(input())
if t>=1 and t<=10000:
    S=list()
    N=list()
    for i in range(t):
        st=list(map(int,input().split()))
        S.append(st[0])
        N.append(st[1])

    for i in range(t):
        if S[i]<=10**9 and S[i]>=1 and N[i]>=2 and N[i]<=10**9 and isEven(N[i]):
            print(countMinCoins(S[i],N[i]))
