#include<iostream>
using namespace std;

// struct student
// {
//     int rollno;
//     float marks;
//     char gender;
// };


typedef struct student
{
    int rollno;
    float marks;
    char gender;
}s;
// we can access the structure by defining type and name at the end of struct


int main(){
    s rahul; //type def example
    // struct student rahul;  
    rahul.rollno = 74;  // defining data in struct
    rahul.gender = 'm';
    rahul.marks = 43;

    // cout<<rahul.rollno<<endl;
    
    cout<<rahul.gender<<endl;
    cout<<rahul.marks<<endl;
    return 0;
}