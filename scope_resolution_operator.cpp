#include<iostream>
int a = 45;
using namespace std;
int main()
{
    int a = 10;
    cout<<"Value of a Local "<<a<<endl;
    cout<<"Value of a global "<<::a;
    return 0;
}
