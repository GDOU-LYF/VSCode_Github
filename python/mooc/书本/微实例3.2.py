def plaincodeC(plaincode):
    ret=""
    for p in plaincode:
        if ord("a")<=ord(p)<=ord("z"):
            ret=ret+chr(ord("a")+(ord(p)-ord("a")+3)%26)
            #print(ret,end="")
        else:
            ret=ret+p
            #print(p,end="")
    return ret

def plaincodeP(plaincode):
    ret=""
    for p in plaincode:
        if ord("a")<=ord(p)<=ord("z"):
            ret=ret+chr(ord("a")+(ord(p)-ord("a")-3)%26)
        else:
            ret=ret+p
    return ret
plaincode=input("输入密码")

m=plaincodeC(plaincode)
print(plaincode+"->"+m)
print(m+"->"+plaincodeP(m))