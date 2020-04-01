#daydayup.py
def daywork(dx):
	green=1
	for i in range(365):
		if i%7 in [1,2,3,4,5]:
			green=green*(1+dx)
		else:
			green=green*(1-0.01)
	return green

def dayday(dx):
	dup=pow(1+dx,365)
	down=pow(1-dx,365)
	print("天天up{:.2f},天天down{:.2f}".format(dup,down))
	return (dup+down)/2

def dayweek(dx):
	green=1
	for i in range(365):
		if i%7 in [0]:
			green=green*(1+dx)
		# else:
		# 	green=green*(1)
	print("一周学一天,剩下时间复习{:.2f}".format(green ))
	return green
ret=daywork(0.01)
print("三天打鱼两天晒网效率(1％)一年后:{:.2f}".format(ret))

dayday(0.019)
dayweek(0.01)
d=0.01
while daywork(d)<=37.78:
	d+=0.001
print("努力要达到{:.3f}".format(d))