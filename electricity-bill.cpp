//Q)An electricity board charges the following rates to domestic users to discourage large consumption of energy For the first 100 units:-60 Paisa per unit For the next 200 units -80 Paisa per unit 1.
//Beyond 300 units:-90 Paisa per unit All users are charged a minimum of Rs 50 f the total amount is more than Rs 300 then an additional surcharge of 15%, is added Implement a C++ program to read the names of users and number of units consumed and display the charges with names
//for 1 person
#include<iostream>
using namespace std;
class bill
{
    float amt=50;
    int unit;
    string name;
    public:

        void setDetails(string n,int a)
        {
            name=n;
            unit=a;
        }
        int calBill()
        {
            if(unit<=100)
                amt+=unit*0.60;
            else if(unit<=300)
                amt+=(unit-100)*0.80+(100*0.60);
            else if(unit>300)
                amt+=(unit-300)*0.90+(100*0.60+200*0.80);

            cout<<"amt:"<<amt<<endl;
            if(amt>300)
            {
               amt=amt+amt*0.15;
            }
            return amt;
        }
        void showBill()
        {
            cout<<name<<" use unit "<<unit<<" your bill is:"<<amt;
        }
};
int main()
{
    int un;
    string nm;
    cout<<"enter a name";
    cin>>nm;
    cout<<endl<<"enter unit";
    cin>>un;

    bill b1;
    b1.setDetails(nm,un);
    b1.calBill();
    b1.showBill();
}
//calculate bill for n number of user
#include<iostream>
using namespace std;
class bill
{
    float amt=50;
    int unit;
    string name;
    public:

        void setDetails(string n,int a)
        {
            name=n;
            unit=a;
        }
        int calBill()
        {
            if(unit<=100)
                amt+=unit*0.60;
            else if(unit<=300)
                amt+=(unit-100)*0.80+(100*0.60);
            else if(unit>300)
                amt+=(unit-300)*0.90+(100*0.60+200*0.80);

           // cout<<"amt:"<<amt<<endl;
            if(amt>300)
            {
               amt=amt+amt*0.15;
            }
            return amt;
        }
        void showBill()
        {
            cout<<name<<" use unit "<<unit<<" your bill is:"<<amt<<endl;
        }
};
int main()
{
    int un,n;
    string nm;
    cout<<"enter no of consumer";
    cin>>n;
    bill b[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter a name";
        cin>>nm;
        cout<<endl<<"enter unit";
        cin>>un;
        cout<<endl;
        b[i].setDetails(nm,un);
    }
    for(int i=0;i<n;i++)
    {
        b[i].calBill();
        b[i].showBill();
        cout<<endl;
    }
}
