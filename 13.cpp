#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23, 45, 56, 78};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathmarks[4];
    mathmarks[0] = 233;
    mathmarks[1] = 213;
    mathmarks[2] = 223;
    mathmarks[3] = 243;

    cout<<"these are mathmarks: "<<endl;

    //u can change the array value like this
    mathmarks[2] = 344;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"the vlaue of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    // }

    // int i;
    // while (i<4)
    // {
    //     cout<<"the vlaue of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    //     i++;
    // }

    int i;
    do
    {
         cout<<"the vlaue of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
         i++;
    } while (i<4);
    
    
    return 0;
}