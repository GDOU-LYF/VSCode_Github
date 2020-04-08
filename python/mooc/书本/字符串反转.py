def reverse(s):#s[::-1]也可以
    if s=="":
        return s
    else :
        return reverse(s[1:])+s[0];
str=input("string:")
print(reverse(str))