#include<iostream>
using namespace std;

    typedef struct employee
    {
        int Id;
        char favchar;
        float salary;
    } ep;
    union money
    {
        int rice;
        char car;
        float pounds;
    };
int main()
{
    //struct employee subam;
    //ep harry;// ep use jjkn type def use kri

    //union money m1;
    //m1.rice = 34;
    //m1.car = 'farari'; ak bare akta prototype e show kre
    //cout<<m1.rice<<endl;

    /*harry.Id = 1;
    harry.favchar = 'c';
    harry.salary = 12889869;
    cout<<"the value is "<<harry.Id<<endl;
    cout<<"the value is "<<harry.favchar<<endl;
    cout<<"the value is "<<harry.salary<<endl;*/

    enum meal{ breakfast, lunch, dinner};

    meal m1 = breakfast;
    cout<<m1;
    //cout<< breakfast;
    //cout<< lunch;
    //cout<< dinner;
    return 0;
}
