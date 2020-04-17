from math import sqrt
def getNum():
    nums=[]
    iNumStr=input("请输入数字")
    while iNumStr !="":
        nums.append(eval(iNumStr))
        iNumStr=input("请输入数字")
    return nums

def mean(numbers):
    s=0.0
    for num in numbers:
        s=s+num
    return s/len(numbers)

def dev(numbers,mean):
    sdev=0.0
    for num in numbers:
        sdev=sdev+(num-mean)**2
    return sqrt(sdev/(len(numbers)-1))

def median(numbers):
    sorted(numbers)
    size=len(numbers)
    if size%2==0:
        med=(numbers[size//2-1]+numbers[size//2])/2
    else:
        med=numbers[size//2]
    return med

n=getNum()
m=mean(n)
print("average:{},dev:{:.2},mid:{}".format(m,dev(n,m),median(n)))
