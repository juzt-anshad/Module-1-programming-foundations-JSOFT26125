#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
     double mark;
     double totalmark;
     cout<<"enter your name : ";
     cin>>name;
     cout<<"enter your age : ";
     cin>>age;
     cout<<"enter your total mark : ";
     cin>>mark;
     totalmark= (mark / 500) * 100;
     cout<<"------- STUDENT PROFILE---------"<<endl;
     cout<<"NAME :  "<<name<<endl<<"AGE : "<<age<<endl<<"TOTAL MARK : "<<mark<<endl;
     cout<<"PERCENTAGE : "<<totalmark<<"%"<<endl;



    return 0;
}