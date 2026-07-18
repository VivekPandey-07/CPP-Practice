#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    int choice;
    cout<<"Enter choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case 2:
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        case 3:
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        case 4:
        if(num2!=0){
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        }
        else{
            cout<<"Cannot divisible by zero";
        }
        break;
        default:
        cout<<"Invalid choice";
    }
}