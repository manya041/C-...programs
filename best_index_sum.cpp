#include<iostream>
using names,pace std;
int bst(int arr[],int j,int size)
{
    int sum=j;
    int k=1;
    for(int i=j;i<size;i++)
    {
        if(sum+k>size)
        break;

        sum+=k;
        k++;
    }
    int adder=0;
    for(int i=j;i<sum;i++)
    adder+=arr[i];

    return adder;
}
int main()
{
    int n,s=0;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        int sum=bst(arr,i,n);
        if(sum>s)
        s=sum;
    }
    cout<<s<<endl;
    return 0;
}
