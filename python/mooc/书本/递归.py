def fact(n):#阶乘计算
    if n==0:
        return 1
    else:
        return n*fact(n-1)

def reverse(s):
    if s=="":
        return s
    else:
        return reverse(s[1:])+s[0]

#递归一定要设计基例!!!
def main():
    num=eval(input())
    print(fact(abs(int(num)))) #小数和负数无法利用递归完成
    #abs 取绝对值
    #int 强制转换为整数
    str=input()
    print(reverse(str))
main()
