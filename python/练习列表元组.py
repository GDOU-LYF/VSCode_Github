#列表

list1=['physics','chemistry',"1997","2000"]
list2=[1,2,3,4,5]
list3=['a','b','c','d']

print (list1[0]+str(list2[0]))
list=[]
list.append("Google")
list.append("Runoob")
print (list,len(list))
del list[1]
print (list,len(list))

list1.reverse()
print (list1)
list1.sort()
print (list1)

vowels = ['e', 'a', 'u', 'o', 'i']
# 降序
vowels.sort(reverse=True)#反转输出
# 输出结果
print ('降序输出:', vowels)

#元组
tup1=('physics','chemistry',1997,2000)
tup2=(1,2,3,4,5,6,7)
print("tup1[0]:",tup1[0])
print("tup2[1:5]:",tup2[1:5])
del tup2
try:
    print (tup2)
except:
    print ("Erro")
try:
    tup1[0] = 100
except:
    print ("Erro2")

#字典
dict={'a':1,'b':2,'b':3}#key相同,代替前面的内容
print (dict)
dict['a']=2
print(dict['a'])
try:
    del dict['a']
    dict.clear() # 清空字典所有条目
    del dict  
    print (dict)
except:
    print ("Erro3")

str = eval(input("请输入："))
#[x*5 for x in range(2,10,2)] 
#x=2 ret=2*5=10
#x=4 ret=4*5=20
#6,30
#8,40
#10(取不到)
print ("你输入的内容是: ", str)