/*Create a class called Invoice that a hardware store might use to represant an invoice for an item sold at the store. An Invoice should include four pieces of information as instance.

Data Members -

partNumber (type String)

partDescription (type String)

quantity of the item being purchased (type int)

price_per_item (type double)

Your class should have a constructor that initializes the four instance variables Provide a set and a get method for each instance variable.
In addition, provide a method named getInvoiceAmount() that calculates the invoice amount (i.e., multiplies the quantity by the price pertem),
then returns the amount as a double value.If the quantity is not positive, it should be set to 0.
If the price per item is not positive then it should be set to 0.0:
Write a test application named invoice Test that demonstrates class Invoice's capabilities.
*//*
#include<iostream>
using namespace std;
class invoice
{
    string partNumber,partDescription;
    int quantity;
    double price;
    public:
        invoice(string partNumber,string partDescription,int quantity,double price)
        {
           this->partNumber=partNumber;
           this->partDescription=partDescription;
           this->quantity=quantity;
           this->price=price;
        }
        void setPartNumber(string partNumber)
        {
            this->partNumber=partNumber;
        }
        void setPartDescription(string partDescription)
        {
            this->partDescription=partDescription;
        }
        void setQuantity(int quantity)
        {
            (quantity>0)?this->quantity=quantity:quantity=0;
        }
        void setPrice(double price)
        {
            (price>0)?this->price=price:price=0.0;
        }
        double getInvoice()
        {
            return price*quantity;
        }

};
int main()
{
    string partNumber,pno,partDescription,pd;
    int quantity,qt;
    double price,pr;
    cout<<"enter part number";
    cin>>partNumber;

    cout<<"enter part description";
    cin>>partDescription;

    cout<<"enter price";
    cin>>price;

    cout<<"enter quantity";
    cin>>quantity;

    invoice iv(partNumber,partDescription,quantity,price);

    cout<<"enter new part number";
    cin>>pno;
    iv.setPartNumber(pno);

    cout<<"enter new part description";
    cin>>pd;
    iv.setPartDescription(pd);

    cout<<"enter new price";
    cin>>pr;
    iv.setPrice(pr);

    cout<<"enter new quantity";
    cin>>qt;
    iv.setQuantity(qt);

    cout<<"part no"<<pno<<endl;
    cout<<"part description"<<pd<<endl;
    cout<<"price"<<pr<<endl;
    cout<<"quantity:"<<qt<<endl;
    cout<<"total amount:"<<iv.getInvoice()<<endl;
}*/
/*Imagine a tollbooth with a class called TollBooth. The two data items are of type unsigned int and double to hold the total number of cars and total amount of money collected.
A constructor initializes both of these data members to 0. A member function called paying Cart (increments the car total and adds 0.5 to the cash total,
Another function called nonPayCar()increments the car total but adds nothing to the cash total.
Finally a member function called display( )shows the two totals. Include a program to test this class. This program should allow the user to push one key to count a paying car and another to count a non paying car.
Pushing the ESC key should cause the program to print out the total number of cars and total cash and then exit.*/
#include<iostream>
#include<conio.h>
using namespace std;
class tollbooth
{
    private:
    double tot_amt;
    public:
        static int tot_car;
        tollbooth()
        {
            tot_amt=0.0;
        }
        void payingCar()
        {
            tot_car++;
            tot_amt+=0.5;
        }
        void nonPayCar()
        {
            tot_car++;
        }
        void display()
        {
            cout<<"Total no of cars:"<<tot_car<<endl;
            cout<<"total amount:"<<tot_amt<<endl;
        }
};
int tollbooth::tot_car=0;
int main()
{
    int ch;
    tollbooth t1;
    do{
        cout<<"1 for paying car"<<endl;
        cout<<"2 for non paying car"<<endl;
        cout<<"esc for display"<<endl;
        cout<<"3 for exit"<<endl;
        cout<<"enter your choice:";
        ch=getch();
        if(ch==27)
        t1.display();
        else
        {
            switch(ch)
            {
                case '1':
                    t1.payingCar();
                    break;
                case '2':
                    t1.nonPayCar();
                    break;
            }
        }
    }while(ch!=3);
    return 0;
}
