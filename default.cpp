// Created on 1.

#include <iostream>
using namespace std;

class Point {//Point函数定义
public:
    Point(int xx=0,int yy=0){
        x=xx;
        y=yy;
    }

Point(Point &p);//复制构造函数
int getX(){
    return x;
}
int getY(){
    return y;
}
private:
int x,y;
};
Point ::Point (Point &p){  //复制构造函数的实现
    x=p.x;
    y=p.y;
    cout<<"调用复制构造函数"<<endl;
}
void fun1(Point p){//对象作形参
    cout<<p.getX()<<endl;
}
Point fun2(){
Point a(1,2);
return a;//返回值为对象
}
int main() {
    Point a(4,5);
    Point b=a;
    cout<<b.getX()<<endl;
    fun1(b);
    b=fun2();
    cout<<b.getX()<<endl;
    return 0;
}