#include<iostream>
using  namespace std;
int main(){
    double num1;
    double num2;
    int sum=0;
    int option;
    double sum1= 0;
    cout<<"1 ADDITION \n 2 SUBTRACTION  \n 3 MULTIPLICATION \n 4 DIVISION"<<endl;
    cout<<"enter two number";
    cin>>num1;
    cin>>num2;
    cout<<"enter option";
    cin>>option;
    switch(option){
        case 1: 
        sum =num1+num2;
        cout<<"SUM ="<<sum;
           break;
        case 2: 
        sum = num1 - num2;
            cout<<sum;
            break;
        case 3 : 
           sum = num1 * num2;
           cout<<sum;
           break;
         case 4: 
           sum1 = num1 /num2;
           cout<<sum1;
           break;
        default  : 
        cout<<"invalid";
        }
        return 0;

}
