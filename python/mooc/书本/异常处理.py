try:
    aip="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    idx=eval(input("number:"))
    print(aip[idx])
except NameError:
    print("您输入的{}索引不存在!".format(idx))
except:
    print("格式输入错误!")
else:
    print("ok")
finally:
    print("over")