#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a =10;
    int &y = a;
    cout<<a<<endl;
    cout<<y;
    return 0;
}
