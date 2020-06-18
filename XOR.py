st=list(map(int,input().split()))
M=st[0]
N=st[1]

if M>=0 and M<=N and N>=M and N<=10**12:
    XOR=M
    i=M+1
    while i<=N:
        XOR=XOR^i
        i=i+1

    print(XOR)
