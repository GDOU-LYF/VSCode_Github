# 请在...补充一行或多行代码

def prime(m):
    ret=1
    if m==2:
        return ret
    else:
        for i in range (2,m):
            if m%i==0:
                ret=0
                break
        return ret

n = eval(input())
count=0
if n!=int(n):
    n=int(n)+1
else:
    n=int(n)
i=n
while count<=5:
    if prime(i):
        count+=1
        if count!=5:
            print("{}".format(i),end=",")
        else:
            print("{}".format(i))
            break
    i+=1