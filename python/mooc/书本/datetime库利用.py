import datetime
today=datetime.datetime.now() #取当前时间
print(today)
today=datetime.datetime.utcnow() #取当前UTC时间
print(today)
#构造一个时间
someday=datetime.datetime(2000,11,15,0,30,25) 
print(someday)
print(someday.isoformat())#格式化为ISO格式
print(someday.isoweekday())#返回当天是星期几