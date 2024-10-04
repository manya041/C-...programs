/*Create a class Complex having two int type variable named real & img denoting real and imaginary part respectively of a complex number.
Overload +, - , == operator to add, to subtract and to compare two complex numbers being denoted by the two complex type objects.*//*
#include<iostream>
using namespace std;
class xyz
{
    int img,real;
    public:
        void setValues(int img,int real)
        {
            this->img=img;
            this->real=real;
        }
        xyz operator+(xyz d)
        {
            xyz dd;
            dd.img=img+d.img;
            dd.real=real+d.real;
            return dd;
        }
        xyz operator-(xyz d)
        {
            xyz dd;
            dd.img=img-d.img;
            dd.real=real-d.real;
            return dd;
        }
        bool operator ==(xyz d)
        {
            int f,f1;
            if(img==d.img)
                f=1;
            else
                f=0;

            if(real==d.real)
                f1=1;
            else
                f1=0;

            if(f1==1 && f==1)
                return true;
            else
                return false;
        }
        void show()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

};
int main()
{
    xyz d1,d2,d3;
    d1.setValues(9,5);
    d2.setValues(3,7);

    d3=d1+d2;
    d3.show();
    d3=d1-d2;
    d3.show();
    bool f= d1==d2;
    if (f==1)
        cout<<"true,both expression is euqal"<<endl;
    else
        cout<<"false,both expression is not euqal"<<endl;

}*/
/*Using the concept of operator overloading. Implement a program to overload the following:
 a. Unary – b. Unary ++ preincrement, postincrement c. Unary -- predecrement, postdecrement.*//*
#include<iostream>
using namespace std;
class xyz
{
    int x,y;
    public:
        void setValues(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void operator++() //prefix
        {
            x+=1;
            y+=1;
        }
        void operator++(int nouse)   //We pass argument in order to avoid collision of same function,there is no use of passed variable
        {//postfix
            x+=1;
            y+=1;

        }
        void operator--() //prefix
        {
            x-=1;
            y-=1;

        }
        void operator--(int nouse)   //We pass argument in order to avoid collision of same function,there is no use of passed variable
        {//postfix
            x-=1;
            y-=1;
        }
        void operator-()
        {
            x=-x;
            y=-y;
        }
        void show()
        {
            cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
        }

};
int main()
{
    xyz d1;
    d1.setValues(9,5);

    ++d1;
    d1.show();
    d1++;
    d1.show();
    --d1;
    d1.show();
    d1--;
    d1.show();
    -d1;
    d1.show();

}*/
/*Using the concept of operator overloading. Implement a program to overload the following:
 a. Unary – b. Unary ++ preincrement, postincrement c. Unary -- predecrement, postdecrement with the help of friend function.*/
#include<iostream>
using namespace std;
class xyz
{
    int x,y;
    public:
        void setValues(int x,int y)
        {
            this->x=x;
            this->y=y;
        }

        void show()
        {
            cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
        }
        friend void operator++(xyz &);
        friend void operator++(xyz &,int);
        friend void operator--(xyz &);
        friend void operator--(xyz &,int);
        friend void operator-(xyz &);

};
void operator++(xyz &d) //prefix
{
    (d.x)+=1;
    (d.y)+=1;
}
void operator++(xyz &d,int nouse)   //We pass argument in order to avoid collision of same function,there is no use of passed variable
{//postfix
    (d.x)+=1;
    (d.y)+=1;

}
void operator--(xyz &d) //prefix
{
    (d.x)-=1;
    (d.y)-=1;

}
void operator--(xyz &d,int nouse)   //We pass argument in order to avoid collision of same function,there is no use of passed variable
{//postfix
    (d.x)-=1;
    (d.y)-=1;
}
void operator-(xyz &d)
{
    d.x=-d.x;
    d.y=-d.y;
}
int main()
{
    xyz d1;
    d1.setValues(7,3);

    ++d1;
    d1.show();
    d1++;
    d1.show();
    --d1;
    d1.show();
    d1--;
    d1.show();
    -d1;
    d1.show();

}
/*
//friend function for binary operator
#include<iostream>
using namespace std;
class xyz
{
    int x,y;
    public:
        void setValues(int x)
        {
            this->x=x;
        }

        void show()
        {
            cout<<"x="<<x<<endl;
        }
        friend xyz operator+(xyz &,xyz &);
        friend xyz operator-(xyz &,xyz &);
        friend xyz operator*(xyz &,xyz &);
        friend xyz operator/(xyz &,xyz &);

};
xyz operator+(xyz &d1,xyz &d2)
{
    xyz dd;
    dd.x=d1.x+d2.x;
    return dd;
}
xyz operator-(xyz &d1,xyz &d2)
{
    xyz dd;
    dd.x=d1.x-d2.x;
    return dd;
}
xyz operator*(xyz &d1,xyz &d2)
{
    xyz dd;
    dd.x=d1.x*d2.x;
    return dd;

}
xyz operator/(xyz &d1,xyz &d2)
{
    xyz dd;
    dd.x=d1.x/d2.x;
    return dd;
}

int main()
{
    xyz d1,d2,d3;
    d1.setValues(89);
    d2.setValues(43);
    d3=d1+d2;
    d3.show();
    d3=d1-d2;
    d3.show();
    d3=d1*d2;
    d3.show();
    d3=d1/d2;
    d3.show();
}*/
