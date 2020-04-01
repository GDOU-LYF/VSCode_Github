import decimal
a=decimal.Decimal('3.141592653')
b=decimal.Decimal('1.234567898') #高精度数字表示法!注意是单引号
decimal.getcontext().prec=20 #设置自定义浮点数精度位数
print(a*b)
