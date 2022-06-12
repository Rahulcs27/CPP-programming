#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Validation of driving license"<<endl;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible to apply for driving license"<<endl;

    }
    else if(age > 65){
        cout<<"You are to old to drive, u need a retirement"<<endl; 
    }
    else{
        cout<<"You are eligible to apply for Driving license"<<endl;
    }
    return 0;
}