k=10000
while k>1:
    print(k)
    k=k/2


s=input()
list1=s.split('-')
print("{}+{}".format(list1[0],list1[-1]))