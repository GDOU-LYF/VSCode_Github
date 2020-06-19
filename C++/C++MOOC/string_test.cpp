#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    string str[]={"bei","shang","chen"};
    cin >>str[0];
    cout<<str[0].length()<<","<<str[0]<<endl;
    str[1][0]='d';
    cout<<str[1].size()<<","<<str[1]<<","<<str[1].substr(1,3)<<endl;
    char str2[20];
    strcpy(str2,str[1].c_str());
    printf("%d\n",'a'-'A');
    char s[]={'a','b','\0','c','\0'};
    cout <<s;

    return 0;
}