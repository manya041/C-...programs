#include<iostream>
using namespace std;
void enqueue(int q[],int *f,int *r,int val,int n)
{
    if((*r)==n-1)
    cout<<"queue is full"<<endl;
    else
    {
        if(*f==-1)
        (*f)++;

        (*r)++;
        q[*r]=val;

    }
}
int dequeue(int q[],int *f,int *r)
{
    if((*f)==-1)
        cout<<"queue is empty"<<endl;
    else
        {
            int num=q[*f];
            (*f)++;
            if((*f)>(*r))
                *r=*f=-1;   //reinitialize
            return num;
        }
}
void display(int q[],int *f,int *r)
{
    for(int i=(*f);i<=(*r);i++)
    {
        if(i!=-1)
        cout<<q[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of queue:";
    cin>>n;

    int f=-1,r=-1;
    int q[n];
   enqueue(q,&f,&r,1,n);
    enqueue(q,&f,&r,2,n);
    enqueue(q,&f,&r,3,n);
    enqueue(q,&f,&r,4,n);
    enqueue(q,&f,&r,5,n);

    display(q,&f,&r);
    int num=dequeue(q,&f,&r);
    cout<<endl<<num<<" deleted"<<endl;
     num=dequeue(q,&f,&r);
    cout<<endl<<num<<" deleted"<<endl;
    num=dequeue(q,&f,&r);
    cout<<endl<<num<<" deleted"<<endl;
     num=dequeue(q,&f,&r);
    cout<<endl<<num<<" deleted"<<endl;
     num=dequeue(q,&f,&r);
    cout<<endl<<num<<" deleted"<<endl;
    num=dequeue(q,&f,&r);
    display(q,&f,&r);
    return 0;
}
