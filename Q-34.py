def noOfTest():
    T=input()
    T=int(T)
    return T

def noOfPairs(K):
    i=1
    j=i+1
    count=0
    while i<K-1:
        j=i+1
        while j<K:
            if i+j<=K:
                count=count+1
            j=j+1
        i=i+1
    return count

T=noOfTest()
if T>=1 and T<=100:
    K=list()

    for i in range(T):
        K.append(int(input()))

    for i in range(T):
        if K[i]>=1 and K[i]<=1000:
            print(noOfPairs(K[i]))
