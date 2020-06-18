def LCM(a,b):
    i=max(a,b)
    while i<=a*b:
        if i%a==0 and i%b==0:
            return i
        i=i+1

t=int(input())
if t>=1 and t<=100:
    lst=list()
    for i in range(t):
        lst.append(int(input()))

    m=0
    for k in range(t):
        i=1
        if lst[k]>=1 and lst[k]<=1000:
            while i<lst[k]:
                j=i+1
                while j<=lst[k]:
                    lcm=LCM(i,j)
                    if lcm==lst[k]:
                        if i+j>m:
                            m=i+j
                    j=j+1
                i=i+1
            print(m)
