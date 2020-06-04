T=int(input())
if T>=1 and T<=50:
    str_lst=list()
    len=list()
    for i in range(T):
        len.append(int(input()))
        st=input()
        str_lst.append(st)



    for i in range(T):
        if len[i]>=1 and len[i]<=1000:
            st=""
            lw=[]
            up=[]
            for j in range(len[i]):
                if str_lst[i][j].islower():
                    lw.append(str_lst[i][j])
                else :
                    up.append(str_lst[i][j])

            lw.sort()
            up.sort()

            k1=0
            k2=0

            new_str=list()
            for j in range(len[i]):
                if str_lst[i][j].islower():
                    new_str.append(lw[k1])
                    k1=k1+1
                else :
                    new_str.append(up[k2])
                    k2=k2+1

            print(st.join(new_str))
