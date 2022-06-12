#include<iostream>
using namespace std;

int main(){
    //normal pointer concept
    int a = 5;
    int* b = &a;
    cout<<"this is address of a "<<&a<<endl;
    cout<<"this is address of b "<<b<<endl;
    cout<<"this is value of b "<<*b<<endl;

    // pointer to pointer concept
    int **c = &b;
    cout<<"the address of b "<<c<<endl;
    cout<<"the address of c "<<*c<<endl;
    cout<<"the value at c "<<**c;
    
    

    return 0;
}