//set global 
int count = 0;
#include <iostream>
using namespace std;
void f(){
  cout <<::count<<endl;
}
int main(void) {
  int count = 0;
  ::count = 100;  // set global count to 1
  count = 2;    // set local count to 2
  printf("%d\t%d\t",count,::count);
  f();
  return 0;
}