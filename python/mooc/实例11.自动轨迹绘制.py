import turtle as t
t.title("自动轨迹绘制")
t.setup(800,600,0,0)
t.pencolor("red")
t.pensize(5)

data=[]
f=open("data.txt")
for line in f:
    line=line.replace("\n","")
    data.append(list(map(eval,line.split(","))))
f.close()
for i in range(len(data)):
    t.pencolor(data[i][3],data[i][4],data[i][5])
    t.fd(data[i][0])
    if data[i][1]:
        t.rt(data[i][2])
    else:
        t.lt(data[i][2])