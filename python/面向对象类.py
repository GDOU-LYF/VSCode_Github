class Employee:#Employee.__name__
    '所有员工的基类'  #Employee.__doc__)
    emCount=0
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
        Employee.emCount+=1
    def displayCount(self):
        print ("Total Employee {}".format(Employee.emCount))
    
    def displayEmployee(self):
        print("Name :{} Salary:{} ".format(self.name,self.salary))
    def prt(self):
        print(self)
        print(self.__class__)

emp1=Employee("Zara",2000)
emp2=Employee("Manni",5000)
emp1.displayEmployee()
emp2.displayEmployee()
print("Total Employee {}".format(Employee.emCount))
emp1.age=7 #添加新的属性
print(emp1.age)
emp1.age=8#改变属性
print(emp1.age)#删除属性
del emp1.age
try:
    print(emp1.age)
except:
    print("Erro!")

if hasattr (emp1,'age'):#判断属性是否存在
    print(getattr(emp1,'age'))#返回数值
else:
    setattr(emp1,'age',8)#添加新属性
    print(getattr(emp1,'age'))#返回数值
    delattr(emp1,'age')#删除属性

emp1.prt()

print( "Employee.__doc__:", Employee.__doc__)
print ("Employee.__name__:", Employee.__name__)
print ("Employee.__module__:", Employee.__module__)
print ("Employee.__bases__:", Employee.__bases__)
print ("Employee.__dict__:", Employee.__dict__)


class Point:
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
    def __del__(self):
        class_name=self.__class__.__name__
        print (class_name,"销毁")
pt1=Point()
pt2=pt1
pt3=pt1
print (id(pt1),id(pt2),id(pt3))
del pt1
del pt2
del pt3
#子类继承
class Father(object):
    def __init__(self, name):
        self.name=name
        print ( "name: %s" %( self.name) )
    def getName(self):
        return 'Father ' + self.name
 
class Son(Father): #核心是括号里的
    def getName(self):
        return 'Son '+self.name
 
if __name__=='__main__':
    son=Son('runoob')
    print ( son.getName() )