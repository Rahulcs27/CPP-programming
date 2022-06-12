#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // for loop
    int num;
    cout<<"Enter the number for the table"<<endl;
    cin>>num;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    // }
    //end of for loop
    //while loop
    // int i = 1;
    // while (i <= 10)
    // {   
    //     cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    //     i++;
        
    // }
    //do while

    int i = 1;
    do
    {
       cout<<num<<" * "<<setw(2)<<i<<" = "<<setw(2)<<num*i<<endl;
       i++; 
    } while (i<=10);
    
    
}