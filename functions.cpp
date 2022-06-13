#include<iostream>
using namespace std;

int sum(int a , int b); // if we declare function after main then we have to use function prototype before main
// int sum(int  , int ); //acceptable
// int sum(a , b); //not acceptable
void print();
int main(){
    int num1 ,num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    print();
    return 0;
}
int sum(int a , int b){
    int c = a + b;
    return c;
}

void print(){
    cout<<"hello"<<endl;
}