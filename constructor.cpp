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
}
