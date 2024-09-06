#include<iostream>
using namespace std;
void push(char st[],char ch,int * top)
{
    st[++(*top)]=ch;
}
char pop(char st[],int *top)
{
   char dl=st[*top];
    st[(*top)--];
    return dl;
}
bool isEmpty(int *top)
{
    if(*top==-1)
    return true;
    else
    return false;
}
int check(char ch)
{
    if(ch=='(')
        return 1;
    if(ch=='{')
        return 2;
    if(ch=='[')
        return 3;
    if(ch==')')
        return -1;
    if(ch=='}')
        return -2;
    if(ch==']')
        return -3;
}

int main()
{
    string s="";
    cout<<"enter string";
    cin>>s;
    char st[s.length()];
    int top=-1;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        int p=check(s[i]);
        if(p>0)
        push(st,s[i],&top);
        else if(p<0&& !isEmpty(&top))
        {
            if((s[i]=='}' && st[top]=='{')||(s[i]==')' && st[top]=='(')||(s[i]==']' && st[top]=='['))
            char ch=pop(st,&top);
        }
       else
        {
            cout<<"Not match";
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            if(isEmpty(&top))
            cout<<"Bracket match";
            else
            cout<<"Not match";
        }

    return 0;
}
