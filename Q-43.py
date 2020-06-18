def count(A):
    prev=''
    cur=''
    next=''
    temp=0
    for i in range(len(A)):
        cur=A[i]
        if i!=0:
            prev=A[i-1]
        #next=A[i+1]
        if cur=='O' and temp==0:
            temp=1
        elif cur=='O' and prev=='O':
            continue
        elif cur=='O' and prev!='O':
            temp+=1
        else :
            continue
    return temp

t=int(input())
if t>=1 and t<=100:
    lst=list()
    for i in range(t):
        lst.append(input())

    for i in range(t):
        if len(lst[i])>=1 and len(lst[i])<=1000:
            print(count(lst[i]))
