#include<iostream>
using namespace std;

int main(){
    //break statement break the code in iteration after the condition 
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if(i==4){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"end of first loop"<<endl;

    //continue statement skips the one which is in condition in iteration
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}