
#Python 3 code to find zero XOR of an array:
def countzeroXOR(A,length):
    if length>=2 and length<=100000:
        i=0
        count=0
        while i<length-1:
            j=i+1
            if int(A[i])>=1 and int(A[i])<=100000:
                while j<length:
                    if int(A[i])^int(A[j])==0:
                        count+=1
                    j+=1
                i+=1
        return count



T=int(input())
if T>=1 and T<=200:
    len=list()
    lst=list()
    for i in range(T):
        len.append(int(input()))
        st=input()
        lst.append(st.split())

    for i in range(T):
        count=countzeroXOR(lst[i],len[i])
        print(count)
