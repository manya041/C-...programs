//compile time polymorphism
/*Construct a Program in C++ to show the working of function . overloading(compile time polymorphism) by using a function named
calculate Area() to calculate area of square, rectangle and triangle using different signatures as required.*/
#include<iostream>
using namespace std;
class area
{
    public:
    void calArea(int l)
    {
        int ar=l*l;
        cout<<"area of square:"<<ar<<endl;
    }
    void calArea(int l,int b)
    {
        int ar=l*b;
        cout<<"area of rectangle:"<<ar<<endl;
    }
    void calArea(double h,float b)
    {
        float ar=0.5*(b*h);
        cout<<"area of triangle:"<<ar<<endl;

    }
};
int main()
{
    area ob;
    ob.calArea(4);
    ob.calArea(3,7);
    ob.calArea(7.0d,8.0f);
}
