#include<iostream>
using namespace std;

// Inline Function
inline int product(int a, int b){
    int c = a * b;
    return c+9;
}

// int product(int a, int b){
//     // Not recommended to use below lines with inline functions 
//     // static int c = 0; // This executes only once
//     // c = c + 6; // Next time this function is run, the value of c retained
//     // return a * b + c;
//     return a * b;
// }

// int strlen(const char *p){

// }

float MoneyReceived(int currentMoney, float factor = 1.08){
    return currentMoney * factor;
}; 
int main(){
    // int a, b;
    // cout<<"Enter the value of a is: ";
    // cin>>a;
    // cout<<"Enter the value of b is: ";
    // cin>>b;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<MoneyReceived(money)<<" Rs after 1 years."<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<MoneyReceived(money, 1.1)<<" Rs after 1 years.";
    return 0;
};