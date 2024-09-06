/*
Anna is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the exams given during this semester.
Create a class named Student with the following specifications:
An instance variable named scores holds a student's 5 exam scores.
A void input () function reads 5 integers and saves them to scores.
An int calculate TotalScore() function that returns the sum of the student's scores.*/

#include<iostream>
using namespace std;
class score
{
   int marks[5],total_marks;
   public:
       void input()
       {
           int mm,k=1;

           for(int i=0;i<5;i++)
            {
                cout<<"enter marks of subject"<<k++<<":";
                cin>>mm;
                marks[i]=mm;
            }
       }
       int total_score()
       {
           for(int i=0;i<5;i++)
           total_marks+=marks[i];
           return total_marks;
       }
};
int main()
{
    int n;
    cout<<"enter no of students"<<endl;
    cin>>n;
    score s1[n];
    int tt[n],k=1;
    for(int i=0;i<n;i++)
    {
        cout<<"for student"<<k++<<endl;
        s1[i].input();
    }
    for(int i=0;i<n;i++)
    {
        tt[i]=s1[i].total_score();
    }
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(tt[0]<tt[i])
            c++;
    }
    cout<<"no of students have greater marks:"<<c<<endl;
}
