#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast, lunch , dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    //we can also do these in enum
    Meal m1 = lunch;
    cout<<m1<<endl;
    

    return 0;
}