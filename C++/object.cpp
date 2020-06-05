#include <iostream>
#include <stdio.h>

using namespace std;

//C
typedef struct Point3d{
    double x;
    double y;
    double z;
}Point3d;

void Point3d_print(const Point3d *p){
    printf("(%.2f,%.2f,%.2f)\n",p->x,p->y,p->z);
}

//C++
class Point3dC
{
private:
    double x1;
    double y1;
    double z1;
public:
   Point3dC (int x,int y,int z){
       x1=x;
       y1=y;
       z1=z;
   }
   void print(){
        cout << "("<<x1<<","<<y1<<","<<z1<<")"<<endl;
   }
};


int main(){
    //C
    Point3d a;
    a.x=1,a.y=2,a.z=3;
    Point3d_print(&a);
    //C++
    Point3dC b(1,2,3);
    b.print();
    return 0;
}