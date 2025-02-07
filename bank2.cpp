#include<iostream>
#include<exception>
using namespace std;
class lowBalanceException:public exception
{
    public:
        const char*what()const throw()
        {
            return "you have low balance amount";
        }
};
class account
{
    protected:
        string userId,pass,cpass,wcpass,wpass;
        int balance;
    public:
        void setUser(string userId)
        {
            this->userId=userId;
        }
        void setPassword(string pass)
        {
           this->pass=pass;
        }
        void setConfirm(string cpass)
        {
            this->cpass=cpass;
            checkValid();
        }
        void setBalance(int balance)
        {
            this->balance=balance;
        }
        void checkValid()
        {
            if (cpass!=pass)
            {
                cout<<"wrong password"<<endl;
                cout<<"enter password again:";
                cin>>wpass;
                setPassword(wpass);
                cout<<"confirm password:";
                cin>>wcpass;
                setConfirm(wcpass);
            }
        }
};
class login:public account
{
    protected:
        string uid1,pass1;
        int wid,ch;
    public:
        void setter(string uid1,string pass1)
        {
            this->uid1=uid1;
            this->pass1=pass1;
        }
        void valid()
        {
            cout<<"userid"<<userId<<" uid"<<uid1;
            if(uid1==userId)
            {
                if(pass1==pass)
                {
                    do
                    {
                        cout<<"\nWelcome to Bank"<<endl;
                        cout<<"1.check balance"<<endl;
                        cout<<"2.transfer money"<<endl;
                        cout<<"3.exit"<<endl;
                        cout<<"enter your choice"<<endl;
                        cin>>ch;
                        switch(ch)
                        {

                            case 1:
                                cout<<"your balance"<<balance;
                                break;
                            case 2:
                                cout<<"enter withdraw amount:";
                                cin>>wid;
                                try{
                                    if(wid>balance)
                                    {
                                        lowBalanceException e;
                                        throw e;
                                    }
                                    else
                                        balance=balance-wid;
                                }catch(lowBalanceException e)
                                {
                                    cout<<e.what();
                                }
                                break;
                        }
                        case 3:
                            cout<<"Exiting..."<<endl;

                    }while(ch<3);
                }
                else
                    cout<<"wrong password"<<endl;
            }
            else
                 cout<<"user ID not found"<<endl;

        }

};
int main()
{
    int ch;
    string uid,pass,cpass,uid1,pass1;
    int balance;
    login l1;
    do
    {
        cout<<"\n1.create account"<<endl;
        cout<<"2.login"<<endl;
        cout<<"3.exit"<<endl;

        cout<<"enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"enter your userId:";
                cin>>uid;
                cout<<"create your password:";
                cin>>pass;
                cout<<"confirm your password:";
                cin>>cpass;

                l1.setUser(uid);
                l1.setPassword(pass);
                l1.setConfirm(cpass);

                cout<<"enter initial balance:";
                cin>>balance;
                l1.setBalance(balance);
                cout<<"ACCOUNT CREATED SUCCESSFULLY"<<endl;
                break;
            case 2:
                cout<<"enter your userId:";
                cin>>uid1;
                cout<<"enter your password:";
                cin>>pass1;

                l1.setter(uid1,pass1);
                l1.valid();

                break;
            case 3:
                cout<<"exiting......"<<endl;
                break;
        }
    }while(ch<4);
}
