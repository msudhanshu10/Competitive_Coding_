def getTotal(a,b):
    lst_a=list()
    lst_b=list()
    count=0

    while a>0:
        lst_a.append(int(a%2))
        a=(a-a%2)/2

    while b>0:
        lst_b.append(int(b%2))
        b=(b-b%2)/2

    if(len(lst_a)>len(lst_b)):
        for i in range(len(lst_a)-len(lst_b)):
            lst_b.append(0)
    else :
        for i in range(len(lst_b)-len(lst_a)):
            lst_a.append(0)



    lst_a.reverse()
    lst_b.reverse()
    
    for i in range(len(lst_a)):
        if(lst_a[i]!=lst_b[i]):
            count+=1

    return count

def sumPairs(A,len):
    count=0
    if len>=1 and len<=10:
        for i in range(len):
            if int(A[i])>=1 and int(A[i])<=10:
                for j in range(len):
                    if i!=j:
                        count=count+getTotal(int(A[i]),int(A[j]))
        return count


t=int(input())
if t>=1 and t<=100:
    N=list()
    arr=list()
    for i in range(t):
        N.append(int(input()))
        st=input()
        arr.append(st.split())
    for i in range(t):
        print(sumPairs(arr[i],int(N[i])))
