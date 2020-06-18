st=list(map(int,input().split()))
A=st[0]
B=st[1]
area=list()
if A>=2 and A<=10**5 and B>=2 and B<=10**5:
    area.append(int((A*B)/3))
    area.append(area[0])
    area.append((A*B)-area[0]-area[1])
    print(area[2]-area[0])
