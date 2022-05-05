#include<iostream>
using namespace std;

// int c = 56;
int main(){
    /******************************** Build in Data Types **********************************/
    // int a, b, c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The value of C is: "<<c<<endl;
    // cout<<"The Gobal C is: "<<::c<<endl;

    /*************************** Float, Double and Long Double Literals *******************************/
    // float d = 55.55F;
    // long double e = 55.55L;

    // cout<<"The Size of 55.55 is: "<<sizeof(55.55)<<endl;
    // cout<<"The Size of 55.55f is: "<<sizeof(55.55f)<<endl;
    // cout<<"The Size of 55.55F is: "<<sizeof(55.55F)<<endl;
    // cout<<"The Size of 55.55l is: "<<sizeof(55.55l)<<endl;
    // cout<<"The Size of 55.55L is: "<<sizeof(55.55L)<<endl;
    // cout<<"The Value of d is: "<<d<<endl;
    // cout<<"The Value of e is: "<<e<<endl;

    /***************************** Reference Variable *******************************/
    // Anolize// Sourabh ----> Souraboa -----> Souoa ----> DarpokProgramer
    // float xyz = 455;
    // float &zyx = xyz;
    // cout<<xyz<<endl;
    // cout<<zyx<<endl;

    /***************************** Type Casting *******************************/
    int tc = 67;
    float ct = 67.76;

    cout<<"The value of tc is: "<<float(tc)<<endl;
    cout<<"The value of tc is: "<<(float)tc<<endl;

    cout<<"The value of ct is: "<<tc<<endl;

    int ctc = int(ct);
    // int ctc = (int)ct;
    cout<<"The value of ctc is: "<<ctc<<endl;

    cout<<"The expression is: "<<tc + ct<<endl;
    cout<<"The expression is: "<<tc + int(ct)<<endl;
    cout<<"The expression is: "<<tc + (int)ct<<endl;

    return 0;
}