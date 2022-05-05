#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
};

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

int factorial(int n){
    if(n<=1){
        return 1;
    };
    return n * factorial(n - 1);
};

// Step By Step Calculation Factorial(5)
// factorial(5) = 5 * factorial(4); 
// factorial(5) = 5 * 4 * factorial(3); 
// factorial(5) = 5 * 4 * 3 * factorial(2); 
// factorial(5) = 5 * 4 * 3 * 2 * factorial(1); 
// factorial(5) = 5 * 4 * 3 * 2 * 1; 
// factorial(5) = 120; 

int main(){
    // Factorial of a Number
    // 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720;
    // 0! = 1 by difinition
    // 1! = 1 by difinition
    // n = n * (n - 1)! ----> Difinition of Factorial
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    // cout<<"The Factorial of "<<a<<" is: "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is: "<<fib(a)<<endl;
    return 0;
};