#include<iostream>
using namespace std;

int main(){
    int a[5] = {1, 3, 45 , 53, 343}; 

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<endl; 
    // }

    int i = 0;
    // while (i < 5)
    // {
    //     cout<<a[i]<<endl;
    //     i++;
    // }
    
    // do
    // {
    //     cout<<a[i]<<endl;
    //     i++;
    // }while (i<5);
    
    // pointers and arrays 

    int* p = a;

    cout<<*p<<endl; //this will print the value of array at 0Th location
    cout<<a<<endl;  // address of the array a
    cout<<*(p+1)<<endl; //print 1st loc
    cout<<*(p++)<<endl;// print 0th location
    cout<<*(++p)<<endl; // print 2nd loc

    return 0;
}