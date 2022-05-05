#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15;
    float pi = 3.12;
    char c = 'S';

    cout<<"The value of a: "<<a<<"\nThe value of b: "<<b<<"\nThe value of PI: "<<pi<<"\nThe value of c: "<<c;

    int glo = 9;
    glo = 78;
    sum();
    bool is_true = true;
    cout<<glo<<is_true; 
    
    return 0;
}
