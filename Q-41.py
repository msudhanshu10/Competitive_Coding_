def diagonalPrint(mat,n):
    for i in range(n):
        k=i
        for j in range(i+1):
            print(mat[j][k],end=" ")
            k=k-1
    print()
    i=1
    while i<n:#for i=1 in range(n):
        k=i
        j=n-1
        while j>=i:
            print(mat[k][j],end=" ")
            j=j-1
            k=k+1
        i=i+1
    print()

t=int(input())
if t>=1 and t<=30:
    arr=list()
    N=list()
    for i in range(t):
        N.append(int(input()))
        st=input()
        arr.append(st.split())

    for i in range(t):
        diagonalPrint(arr[i],N[i])
