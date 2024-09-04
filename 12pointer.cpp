#include<iostream>
using namespace std;

int main(){
    //What is a pointer ----> data type which holds the address of other data types 

    int a=3;
    int* b;
    b = &a;

    //& ----> (address of) operator
    cout<<"The address of a is "<<b<<endl; // output--> 0xe13fff724
    cout<<"The address of a is "<<&a<<endl; 

    //* ----> (value at) dereferefce operator
    cout<<"The value at address of b is "<<*b<<endl;

    //Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address of c is "<<*c<<endl;
    cout<<"The value at address value at (value at of c) is "<<**c<<endl;

    return 0;
}