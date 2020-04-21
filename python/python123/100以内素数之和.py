def isplame(n):
    ret=1
    if n==2:
        return ret
    elif n%2==0 and n!=2:
        ret=0
        return ret
    else:
        for i in range(3,n):
            if n%i==0:
                ret=0
                break
    return ret

sum=0
for i in range(2,100):
    if(isplame(i)==1):
        sum+=i
        
print(sum)