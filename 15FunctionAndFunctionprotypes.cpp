#include<iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }


// ***Function Prototype
// type function-name (arguments)
int sum(int a, int b);
void g(void);


int main(){
    int num1 , num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
//num1 and num2 actual parameters
    cout<<"The sum is "<< sum(num1, num2);
    g();
    return 0;

}


int sum(int a, int b)
{
    // formal parameters a and b will be taking values from actul parameters num1 and num2
    int c = a + b;
    return c;
}

void g()
{
    cout<<"\nGood morning";
}