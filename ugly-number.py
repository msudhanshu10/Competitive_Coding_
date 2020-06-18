def check(N):
    flag=1
    n=N
    while N>1:
        if N%2==0:
            N=int(N/2)
            continue
        elif N%3==0:
            N=int(N/3)
            continue
        elif N%5==0:
            N=int(N/5)
            continue
        else :
            flag=0
            break

    if flag==1:
        print(n,'is an UGLY number.')
    else :
        print(n,'is NOT an UGLY number.')


check(13)
