#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a, int b, int c); // Declaration
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        };
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Sourabh;
    // Sourabh.a = 90 ---->> This will thrown error as a is private
    // Sourabh.d = 4; ---->> This will not thrown error as d is public
    Sourabh.e = 5;
    Sourabh.setData(1, 2, 3);
    Sourabh.getData();
    
    return 0;
};