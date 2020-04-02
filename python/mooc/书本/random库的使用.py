from random import*
seed(125)
a=random() #生成随机数
b=uniform(1,100)
ls=list(range(10))#生成0-9的数值
print("{:.2f}\n{:.2f}\n{}\n".format(a,b,ls))
shuffle(ls)#打乱
print("{}\n".format(ls))