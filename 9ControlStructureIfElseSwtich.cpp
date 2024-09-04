//--------------if-else and swtich case statement------------
#include<iostream>
using namespace std;

int main()
{
    //cout<<"the tut 9";
    //Selection control structure: IF-else ladder

    int age;
    cout<<"tell me your age ";
    cin>>age;
    // if (age<18)         
    // {
    //     cout<<"you can not come to my party"<<endl;
    // }
    // else if (age<18)         
    // {
    //     cout<<"you are a kid and you will get a kid pass to my party"<<endl;
    // }
    // else         
    // {
    //     cout<<"you can come to my party"<<endl;
    // }

    //Selection control structure: Switch case
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    
    return 0;
}