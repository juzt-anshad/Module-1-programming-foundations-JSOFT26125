#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"enter two numbers";
    cin>>a>>b;
    if(a>b){
        cout<<"Largest number is "<<a;
    }
    else if(a==b){
        cout<<"Two numbers are equal";
    }
    else {
        cout<<"Largest number is "<<b;
    }
return 0;
}