/*Define a class Hotel in C++ with the following specifications
Private members:
>Rno Data member to store room number
>Name Data member to store customer name
>Tariff Data member to store per day charges
>NOD Data member to store number of days of stay
>CALC() Function to calculate and return amount as NOD*Tariff and if the value of days*tariff>10000,then total amount
is 1.05*days*tarrif.
Public members
>Checkin() Function to enter the content Rno. Name, Tariff and NOD
>Checkout() Function to display Rno. Name, Tariff, NOD and Amount (amount to be displayed by calling function) CALC()*/
#include<iostream>
using namespace std;
class bill
{
    private:
    int nod,rno;
    string nm;
    int tariff;
    float amt;
    void calc()
    {
        amt=nod*tariff;
        if(amt>10000)
            amt=amt*1.05;
    }
    public:
        void checkIn(int d,int rn,int rt,string n)
        {
            nm=n;
            nod=d;
            rno=rn;
            tariff=rt;
        }
        void tt()
        {
            calc();
        }
        void checkOut()
        {
            cout<<"name:"<<nm<<endl<<"no of days u stayed"<<nod<<endl<<"room no"<<rno<<endl<<"charge per day:"<<tariff<<endl<<"total bill"<<amt<<endl;
        }

};
int main()
{
    int d,rno;
    string s;
    int rt,n;

    cout<<"enter no of customer";
    cin>>n;
    bill ob[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter name";
        cin>>s;
        cout<<endl<<"enter of days";
        cin>>d;
        cout<<endl<<"enter room no";
        cin>>rno;
        cout<<endl<<"enter per day rent";
        cin>>rt;
        cout<<endl;
        ob[i].checkIn(d,rno,rt,s);


    }
    for(int i=0;i<n;i++)
    {
        ob[i].tt();
       ob[i].checkOut();
    }
}
