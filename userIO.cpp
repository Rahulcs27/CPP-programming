#include<iostream>
using namespace std;
int main(){
    float length , breadth, area;
    cout<<"*****Area of rectangle*****\n\n";
    cout<<"Enter the length of the rectangle\n";
    cin>>length;
    cout<<"Enter the breadth of the rectangle\n";
    cin >> breadth;
    area = length*breadth;
    cout<<"Area is :"<< area;

    return 0;
}