#include<iostream>
using namespace std;
int main(){
    int attendance,marks;
    cin>>attendance>>marks;
    if(marks>=33 && attendance>=75){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}