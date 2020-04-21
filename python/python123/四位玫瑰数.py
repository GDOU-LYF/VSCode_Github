ls=[]
for i in range(1,10**4):
    t=str(i)
    l=len(t)
    sum=0
    for j in range(l):
        sum+=pow(int (t[j]),4)
    if sum==i:
        ls.append(i)

for k in ls:
    if k>=1000:
        print(k) 