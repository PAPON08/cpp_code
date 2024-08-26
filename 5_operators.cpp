/*There are two type of header files:
     1. System header files": It comes with the compiler*/
#include<iostream>

    /* 2. user defined header files: It is written by the pogrammer*/
//#include "this.h" --> this will produce an error if this.h is no present in the current directory
// cppreference.com
using namespace std;

int main()
{
    int a=4, b=5;
    cout<< "Operators in c++"<<endl;
    cout<< "Following are the types of operators in c++"<<endl;

    // Arithmetic operators
    cout<< "Following are the types of Arithmetic operators in c++"<<endl;
    cout<<"The value of a + b is "<< a + b<<endl;
    cout<<"The value of a - b is "<< a - b<<endl;
    cout<<"The value of a * b is "<< a * b<<endl;
    cout<<"The value of a / b is "<< a / b<<endl;
    cout<<"The value of a % b is "<< a % b<<endl; //4
    cout<<"The value of a ++ is "<< a ++<<endl; //5
    cout<<"The value of a -- is "<< a --<<endl; //4
    cout<<"The value of ++ a is "<< ++ a<<endl; //5
    cout<<"The value of -- a is "<< -- a<<endl; //4
    cout<<endl;

    //Assignment Operaters ==> used to assign values to variables
    /* Like  --> int a=3, b=5;
                 char d='e';*/
    

    //Comparison Operatores
    cout<< "Following are the types of Comparison operators in c++"<<endl;
    cout<<"The value of a == b is "<<(a == b)<<endl;
    cout<<"The value of a != b is "<<(a != b)<<endl;
    cout<<"The value of a <= b is "<<(a <= b)<<endl;
    cout<<"The value of a >= b is "<<(a >= b)<<endl;
    cout<<"The value of a < b is "<<(a < b)<<endl;
    cout<<"The value of a > b is "<<(a > b)<<endl;


    // Logical Operatores
    cout<< "Following are the types of Logical operators in c++"<<endl;
    cout<<"The value of Logical 'AND'operators ((a == b) && (a<b))  is "<<((a == b) && (a<b)) <<endl;
    cout<<"The value of Logical 'OR'operators ((a == b) || (a<b))  is "<<((a == b) || (a<b)) <<endl;
    cout<<"The value of Logical 'NOT'operators (!(a == b))  is "<<(!(a == b)) <<endl;



    return 0;
}
