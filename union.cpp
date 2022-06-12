#include<iostream>
using namespace std;

union payment{
    int cash;
    float loan;
    char card;
};

int main(){

    union payment p1;
    p1.cash = 500;
    // p1.loan = 250; // if we again define value to union it will give garbage value because we can choose any one defined data in union not more than one

    cout<<p1.cash<<endl;
    // cout<<p1.card<<endl; // e.g
    return 0;
}