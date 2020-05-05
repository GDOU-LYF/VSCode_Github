var1=1
var2=10
del var1,var2
try:
    print(var1)
    print(var2)
except:
    print("del!")

s='abcdef'
print(s[1:5])
print(s[1:],s[:-1])
print(s[0]*2)
print(s[0]+"0.0")
# m,n=eval(input())
# sum=0
# for i in range(m,n+1):
#     # sum+=i
#     if i%2==0:
#         sum+=i
# print(sum)
i=0
# print(end="*"*4)
# while i<=7:
#     go=input()
#     if go.upper()=='Y':
#         i+=1
#     else:
#         continue #不影响while-else
# else:
#     print("add")

#列表
list=['rub',786,2.23,'john',70.2]
tw=[123,'john']
print (list,tw)
print (list[0])
print (list[1:3])
print(list [:-1])
#元组 /只读列表
tuple=('rub',786,2.23,'john',70.2)
twtup=(123,'john')
print (tuple)
print (tuple[0])
print (tuple[1:])
print (tuple[1:]*2)


#字典
dict={}#空字典
dict['one']="this is one"
dict[2]="this is two"
t={'name':'john','code':6734,'dept':'sales'}
print (dict)
print (dict['one'])
print (t)
print (t.keys())
print (t.values())

