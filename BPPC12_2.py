N=int(input())
x=0
y=0
minX=0
minY=0
min=N+2
i=1

while i<=int(N/4):
    if(N%i==0):
        x=int(N/i)
        y=i
        if(x+y)<min:
            min=x+y
            minX=x
            minY=y
    i=i+1

print(minX+minY-2)
    



