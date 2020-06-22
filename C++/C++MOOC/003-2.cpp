#include <iostream>
#include <string>
using namespace std;
class Base {
public:
	int k;
	Base(int n):k(n) { }
};
class Big
{
public:
	int v;
	Base b;
    Big(int n):b(n){
        v=n;
    }
	Big(const Big & x):v(x.v),b(x.v){} //可有可无,无的时候会强制类型转换,有const和无const都可以

// 在此处补充你的代码
};
int main()
{
	int n;
	while(cin >>n) {
		Big a1(n);
		Big a2 = a1;
		cout << a1.v << "," << a1.b.k << endl;
		cout << a2.v << "," << a2.b.k << endl;
	}
}