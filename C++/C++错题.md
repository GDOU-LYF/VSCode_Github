使用内联函数的目的是提高程序的运行速度 对

```
下面小段程序，哪个是正确的：
A.
   char * p = new char[10];       

   p[0] = 'K'; 

   delete [] p;

B.
   int *p = new int[25]; 

   p[10] = 100; 

   delete p

C.
   char * p = new int; 

   p = 'a';  

   delete p;

D.
int * p = new char[20]; 
```

CD类型不匹配,B,delete 错误