#https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
def subarray(A,N,S):
    if N>=1 and N<=10**7:
        i=0
        sum=0
        while i<N:
            if int(A[i])>=1 and int(A[i])<=10**10:
                j=i
                sum=0
                while j<N:
                    sum+=int(A[j])
                    if sum==S:
                        print(i+1,j+1)
                        break
                    if sum>S:
                        break
                    j=j+1
                if sum==S:
                    break
                i=i+1
        if sum!=S:
            print('-1')




t=int(input())
if t>=1 and t<=100:
    N=list()
    S=list()
    arr=list()
    for i in range(t):
        st=input()
        st=st.split()
        N.append(int(st[0]))
        S.append(int(st[1]))
        arr.append(input().split())

    for i in range(t):
        subarray(arr[i],N[i],S[i])
