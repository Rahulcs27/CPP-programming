#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Switch case"<<endl;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"Time to focus on the studies"<<endl;
        break;
    case 22:
        cout<<"Time to focus on the career"<<endl;
        break;
    case 30:
        cout<<"Time to focus on the family planning"<<endl;
        break;
    
    default:
        cout<<"You are a nerd"<<endl;
        break;
    }
    return 0;
}