//search character in string
/*#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    char ch;
    cout<<endl<<"enter character u wanna find";
    cin>>ch;
    int f=0,p=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch)
        {
            f=1;
            p=i;
            break;
        }
    }
    if(f==1)
        cout<<"found at index:"<<p<<endl;
    else
        cout<<"not found";

    return 0;
}*/
//remove duplicate elements
#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int p=0,c=0;
    char s1[50];
    printf("enter string");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        c=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[i]==s[j] && j<i)
            { c=0;
            break; }

            if(s[i]==s[j])
                c++;
        }
        if(c>0)
            s1[p++]=s[i];
    }
    s1[p]='\0';

    puts(s1);
    return 0;
}
