//class
#include<iostream>
using namespace std;
//struct employee   //we have to make variable of structure
class employee      //we have to make object of class
{
    private:
        int id;
        string nm,cnm;
        float sal;
    public:

        void setID(int a)
        {
            id=a;
        }
        void setName(string n)
        {
            nm=n;
        }
        void setCompName(string cn)
        {
            cnm=cn;
        }
        void setSalary(float k)
        {
            sal=k;
        }
        int getID()
        {
            return id;
        }
        string getName()
        {
            return nm;

        }
        string getCompName()
        {
            return cnm;
        }
        float  getSalary()
        {
            return sal;
        }
        void display()
        {
            cout<<"employee info"<<endl;
            cout<<"id:"<<id<<endl;
            cout<<"name:"<<nm<<endl;
            cout<<"company name:"<<cnm<<endl;
            cout<<"Salary:"<<sal<<endl;
        }
};
int main()
{
    employee e1;
    e1.setID(34);
    e1.setName("manya");
    e1.setCompName("google");
    e1.setSalary(236800.67);
    int a=e1.getID();
    cout<<"id:"<<a<<endl;
    string s=e1.getName();
    cout<<"name:"<<s<<endl;
    string s2=e1.getCompName();
    cout<<"company name:"<<s2<<endl;
    float sl=e1.getSalary();
    cout<<"salary:"<<sl<<endl;
    e1.display();

    return 0;
}
