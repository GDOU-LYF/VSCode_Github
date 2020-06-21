#include <iostream>
using namespace std;
class CDemo
{
public:
    CDemo();
    CDemo(const CDemo & a);
    ~CDemo();
};
CDemo::CDemo()
{
    cout <<"构造函数调用"<<endl;
}

CDemo::CDemo(const CDemo & a)
{
    cout <<"复制构造函数调用"<<endl;
}

CDemo::~CDemo()
{
    cout <<"析构函数调用"<<endl;
}
void Func(CDemo obj){
    cout <<"func"<<endl;
}
CDemo d1;
CDemo Test(){
    cout <<"test"<<endl;
    return d1;
}
int main(){
    CDemo d2;
    Func(d2);//调用的参数是对象,会触发复制构造函数
    Test();//返回对象的时候触发复制构造函数
    cout<<"main End"<<endl;
    return 0;
}
