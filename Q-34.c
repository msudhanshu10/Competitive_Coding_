#code
def printArray(A):
    for i in range(len(A)):
        print(A[i],end=" ")
    print()

t=int(input())
if t>=1 and t<=500:
    N=list()
    A=list()
    for i in range(t):
        N.append(int(input()))
        st=list(map(int,input().split()))
        A.append(st.sort())


    for i in range(t):
        if N[i]>=1 and N[i]<=10**6:
            printArray(A[i])
           
