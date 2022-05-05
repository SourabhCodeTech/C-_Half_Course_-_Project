#include<iostream>
using namespace std;

int main(){
    // Calculate Simple Interest
    double p, r, t;
    cout<<"Enter Principle: "<<endl;
    cin>>p;
    cout<<"Enter Rate: "<<endl;
    cin>>r;
    cout<<"Enter Time: "<<endl;
    cin>>t;
    cout<<"\nSimple Interest is: "<<(p * r * t)/100;
    return 0;
};