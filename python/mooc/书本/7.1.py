textfile=open("7.1.txt","r")
#textfile.write(input("输入:"))
print(textfile.readline())
textfile.close()
binfile=open("7.1.txt","rb")
print(binfile.readline())
binfile.close()

a,b=1,2
a=3 if a>b else b
