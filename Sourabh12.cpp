#include<iostream>
using namespace std;

int main(){
    // What is a Pointer? ---> datatype which hold to address of other datatypes

    int a = 3;
    int * b = &a; //This and
    // int *b; // This are same method
    // b = &a;
    // & ---> (Address of) operator
    cout<<"The address of a is: "<<&a<endl;
    cout<<"The address of a is: "<<b<<endl;

    // * ---> (value of) Dereference of operator
    cout<<"The value at address b is: "<<*b<<endl;
    
    //pointer to pointer
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;

    return 0;
};