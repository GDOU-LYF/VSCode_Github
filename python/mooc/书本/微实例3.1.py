weekstr="星期一星期二星期三星期四星期五星期六星期日"
weekstr2="一二三四五六日"
weekid=eval(input("number:"))
pos=(weekid-1)
print("星期{}".format(weekstr2[pos:pos+1]))