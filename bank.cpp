/*Implement a Program in C++ by defining a class to represent a bank account.
Include the following:
Data Members
* Name of the depositor
* Account number
* Type of account (Saving, Current etc.)
* Balance amount in the account

Member Functions
* To assign initial values
* To deposit an amount
* To withdraw an amount after checking the balance*/

To display name and balance
#include<iostream>
using namespace std;
class bank
{
    string name,type;
    int account_no,balance;
    public:
        void setDetails(string name,string type,int account_no,int balance)
        {
            this->name=name;
            this->type=type;
            this->account_no=account_no;
            this->balance=balance;
        }
        void deposit_bal(int deposit)
        {
            balance+=deposit;
        }
        void withdraw_bal(int withdraw)
        {
            if(balance>=withdraw)
            balance-=withdraw;
            else
                cout<<"low balance "<<endl;
        }
        void display()
        {
            cout<<"name:"<<name<<endl<<"balance:"<<balance;
        }

};
int main()
{
    int ch;
    int account_no,balance,withdraw,deposit;
    string name,type;
    cout<<"enter name";
    cin>>name;
    cout<<"enter account type";
    cin>>type;
    cout<<"account no";
    cin>>account_no;
    cout<<"enter balance amount";
    cin>>balance;
    cout<<"1 for deposit"<<endl;
    cout<<"2 for withdraw"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    bank b1;
    b1.setDetails(name,type,account_no,balance);
    switch(ch)
    {
        case 1:
            cout<<"enter deposit amount";
            cin>>deposit;
            b1.deposit_bal(deposit);
            break;
        case 2:
            cout<<"enter withdraw amount";
            cin>>withdraw;
            b1.withdraw_bal(withdraw);
            break;

    }
    b1.display();
}
