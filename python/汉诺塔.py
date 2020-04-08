count=0
def hanoi(n,src,dst,mid):
    global count #声明全局变量使用
    if n==1:
        print("{}:{}->{}".format(1,src,dst))
        count+=1
    else:
        hanoi(n-1,src,mid,dst)
        print("{}:{}->{}".format(n,src,dst))
        count+=1
        hanoi(n-1,mid,dst,src)

hanoi(3,"A","B","C")
print(count)
