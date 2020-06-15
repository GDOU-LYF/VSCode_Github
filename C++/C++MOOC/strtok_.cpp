// //strtok 用法示例：
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     char str[] ="- This, a sample string, OK.";
//     //下面要从 str 逐个抽取出被" ,.-"这几个字符分隔的字串
//     char * p = strtok (str," ,.-"); //请注意，" ,.-"中的第一个字符是空格
//     while ( p != NULL) //只要 p 不为 NULL，就说明找到了一个子串
//     {
//     cout << p << endl;
//     p = strtok(NULL, " ,.-");//后续调用，第一个参数必须是 NULL
//     }
// }

#include <string.h>
#include <stdio.h>
 
int main () {
   char str[80] = "Wang Hao,21,1300012703,91,96,94,89";
   char *token;
   
   token = strtok(str, ",");// 获取第一个子字符串
   
   while( token != NULL ) {
      printf( "%s\n", token );//输出
      token = strtok(NULL, ",");// 继续获取其他的子字符串 
      //如要获取原字符串的内容,strtok第一个参数必须是NULL!
   }
   printf("%s",str);//初始的字符串被修改,输出分割后的第一段内容
   return(0);
}