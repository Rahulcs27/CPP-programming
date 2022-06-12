#include<iostream>
#include<iomanip>
using namespace std;

int main(){


    // constant in cpp
    const int a = 10;
    cout<<a<<endl;
    
    // a = 5;   // this will give error because constant value cannot be change
    cout<<a<<endl;
    // end of const

    int b = 1,c = 14, d = 1453;
    //setw function from iomanip header file is manipulation function which will print in right order

    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;

    // precedence operator
    int e = (((b*c)+a)-d);
    cout<<e<<endl;
    return 0;

}