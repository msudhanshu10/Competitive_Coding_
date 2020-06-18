def modExp(A):
    if int(A[0])>=1 and int(A[0])<=10**5 and int(A[1])>=1 and int(A[1])<=10**5 and int(A[2])>=1 and int(A[2])<=10**5:
        return (int(A[0])**int(A[1]))%int(A[2])

    

t=int(input())
if t>=1 and t<=70:
    lst=list()
    for i in range(t):
        st=input()
        lst.append(st.split())

    for i in range(t):
        print(modExp(lst[i]))
