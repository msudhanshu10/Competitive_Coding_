fname=input('Enter file name:')
file=open(fname)

temp=0.0
for line in file:
    if line.startswith('X-DSPAM-Confidence:'):
        pos=line.find(':')+1
        line=line[pos:]
        line=line.rstrip()
        temp=temp+float(line)
    else:
        continue


print(temp)
