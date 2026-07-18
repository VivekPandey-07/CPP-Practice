#include<iostream>
using namespace std;
int main(){
    float attendance,marks;
    cin>>marks>>attendance;
    if(marks>=90){
        if(attendance>=75){
            cout<<"Scholarship granted";
        }
        else{
            cout<<"Attendance is low";
        }
    }
    else{
        cout<<"Marks are low";
    }
}