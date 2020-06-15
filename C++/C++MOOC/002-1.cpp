#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
    char name[100];
    int age;
    int number;
    int score [4];
    double avr;
public:
        Student(){
            avr=0.0;
        }
        void input();
        void calculate();
        void output();
};
void Student::input(){
    //方法一
    // int i;
    // for (i=0;(name[i]=getchar())!=',';i++){
    //     ;
    // }
    // name[i]='\0';
    // scanf("%d,%d",&age,&number);
    // for(i=0;i<4;i++){
    //     scanf(",%d",&score[i]);
    // }
    //方法二
    // char buf[110];
    // cin.getline(buf,100);
    // char * p = strchr(buf,',');
    // p[0] = 0;
    // strcpy( name,buf);
    // sscanf(p + 1, "%d,%d,%d,%d,%d,%d",&age,&number,score,score+1,score+2,score+3);
    char buf[210];
    cin.getline(buf,200);
    char * p = strtok(buf,",");
    strcpy(name,p);
    p = strtok(NULL,",");
    age = atoi(p);//把参数 str 所指向的字符串转换为一个整数（类型为 int 型）
    p = strtok(NULL,",");
    number = atoi(p);//把参数 str 所指向的字符串转换为一个整数（类型为 int 型）
    for( int i = 0;i < 4; ++i ) {
        p = strtok(NULL,",");
        score[i] = atoi(p);//把参数 str 所指向的字符串转换为一个整数（类型为 int 型）
    }
}
void Student::calculate(){
    int i;
    for (i=0;i<4;i++){
        avr+=score[i];
    }
    avr/=4;
}
void Student::output(){
    cout << name<<","<<age<<","<<number<<","<<avr<<endl;
}

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}