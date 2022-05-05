#include<iostream>
using namespace std;

int main(){
    // Convert Celcius to Farenheit
    int calcius;
    cout<<"Enter Calcius in Degrees: ";
    cin>>calcius;
    cout<<"Farenheit is: "<<((9/5) * (calcius + 32));
    return 0;
};