#include<iostream>
using namespace std;

int vari = 6; //global
void sum(){
    int a;
    cout<<vari<<"\n";// ata prothome nijer modee local vari kujbe na paile global vari kache jabe
}

int main(){
    // int a=4;
    // int b = 5;

    int vari = 17;//local
    vari = 45;//local r global r modde local  sob somoi age call hoi

    int a=14, b=15;
    float pi=3.1416;
    char c = 'h'; //akta r besi character use kora jabe na
    bool d = true;
    bool e = false;

    sum();
    cout<<vari<<"\n"<<d<<"\n"<<e;
    // cout<<"This is tutorial 4. Here is the value of a is"<<a<<". The value of b is "<< b;
    // cout<<"\nthe value of pi is: "<<pi;
    // cout<<"\nthe value of c is: "<<c;
    return 0;

}