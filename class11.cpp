#include<iostream>
using namespace std;
int main(){
    int num1;
    int num;
    cout<<" eg : \n If you enter 2 i will show the multiplication table of 2 up to 10"<<endl<<"enter a  number";
    cin>>num;
    for (int i=1;i<=10;i++){
       num1=i*num;
       cout<<num1<<endl;
    }
    return 0;
    }