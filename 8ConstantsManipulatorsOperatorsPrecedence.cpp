#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //int a=34;
    //char c='c';
    //cout<<"The value of a was: "<<a;
    //cout<<"The value of a was: "<<c;

    //a=45;
    //c='4';
    //cout<<"The value of a is: "<<a;
    //cout<<"The value of a is: "<<c;

    //************CONSTANTS in C++**************
    //const int a=3;
    // cout<<"The value of a was: "<<a;

    // a=45;
    // cout<<"The value of a is: "<<a;



     //************MANIPULATORS in C++**************
    //int a=3, b=54, c=2126;

    // cout<<"the value of a is: "<<setw(4)<<a<<endl;
    // cout<<"the value of b is: "<<setw(4)<<b<<endl;
    // cout<<"the value of c is: "<<setw(4)<<c<<endl;

    // cout<<"the value of a without setw is: "<<a<<endl;
    // cout<<"the value of c without setw is: "<<b<<endl;
    // cout<<"the value of b without setw is: "<<c<<endl;

     //************OPERATER PRECEDENCE in C++**************
     int a=3, b=54;
     int c= ((((a*5)+b)-45)+46);

     cout<<c;

    return 0;
}