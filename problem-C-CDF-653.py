def countbraces(S):
    while len(S)>0:
        if "()" in S:
            temp=S.replace("()","")
            S=temp
        else:
            return int(len(S)/2)

    if len(S)==0:
        return 0

t=int(input())
if t>=1 and t<=2000:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        A.append(input())

    for i in range(t):
        if N[i]>=2 and N[i]<=50:
            print(countbraces(A[i]))
