#https://practice.geeksforgeeks.org/problems/longest-common-substring/0/
#algorithm to check from biggest pair to smallest
def substring(A,k):
    i=0
    N=len(A)
    B=list()
    while i<=k:
        B.append(A[i:N-k+i])
        i=i+1
    return B

def longestCommenSubstring(A,B):
    k=min(len(A),len(B))
    i=k
    flag=False
    while i>=1:
        sub_A=substring(A,len(A)-i)
        sub_B=substring(B,len(B)-i)
        for j1 in sub_A:
            for j2 in sub_B:
                if j1==j2:
                    print(len(j1))
                    flag=True
                    break
            if flag==True:
                break
        if flag==True:
            break
        i=i-1
    if flag==False:
        print("0")

t=int(input())
if t>=1 and t <=200:
    N=list()
    M=list()
    A=list()
    B=list()
    for i in range(t):
        st=input().split()
        N.append(int(st[0]))
        M.append(int(st[1]))
        A.append(input())
        B.append(input())

    for i in range(t):
        if N[i]>=1 and N[i]<=100 and M[i]>=1 and M[i]<=100:
            longestCommenSubstring(A[i],B[i])
