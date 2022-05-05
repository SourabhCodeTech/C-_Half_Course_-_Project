#include<iostream>
using namespace std;

// Function Prototype
// type Function_name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable
int sum(int, int); //--> Acceptable
// void g(void); //--> Acceptable
void g(); //--> Acceptable
int main(){
    int num1, num2;
    cout<<"Enter Your First Number: ";  
    cin>>num1;
    cout<<"Enter Your Second Number: ";  
    cin>>num2;
    // Num1 and Num2 are actual parameters and actual parameters value same to Formal parameters are right.
    cout<<"The Sum is: "<<sum(num1, num2)<<endl;
    g();
    return 0;
};

int sum(int a, int b){
    // Formal Parameters a and b will be talking value form actual parameters num1 and num2.
    int c = a+b;
    return c;
};

void g(){
    cout<<"Hello Programmer, Good Morning.";
};