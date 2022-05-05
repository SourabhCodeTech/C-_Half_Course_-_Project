#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 78;
    // cout<<"The value a was: "<<a<<endl;
    // a = 90;
    // cout<<"The value a is: "<<a<<endl;

    /****************** Constant in C++ ***********************/
 
    // const int b = 9;
    // cout<<"The value b was: "<<b<<endl;
    // b = 00.00008; You Will Get An Error Because b is Constant
    // cout<<"The value b is: "<<b<<endl;

    /****************** Manuplating in C++ ***********************/
    // int c = 6, d = 78, e = 789, f = 5888;
    // cout<<"The value c without setw was: "<<c<<endl;
    // cout<<"The value d without setw was: "<<d<<endl;
    // cout<<"The value e without setw was: "<<e<<endl;
    // cout<<"The value f without setw was: "<<f<<endl;

    // cout<<"The value c with setw was: "<<setw(5)<<c<<endl;
    // cout<<"The value d with setw was: "<<setw(5)<<d<<endl;
    // cout<<"The value e with setw was: "<<setw(5)<<e<<endl;
    // cout<<"The value f with setw was: "<<setw(5)<<f<<endl;
    

    /****************** Operators Precedence ***********************/
    int g = 9, h = 10;
    int i = (g*6)+h;
    int j = ((((g*8)+h)-787)+77896);
    cout<<setw(5)<<i<<endl;
    cout<<setw(5)<<j<<endl;


    return 0;
}