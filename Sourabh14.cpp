#include<iostream>
using namespace std;

typedef struct employee {
    int eID;
    char favChar;
    float salary;
} ep;

union money {
    int rice;
    char car;
    float pounds;
};
int main(){
    // ep himanshu;
    // himanshu.eID = 1;
    // himanshu.favChar = 'H';
    // himanshu.salary = 56000000;

    // cout<<"The vale of Himanshu Id: "<<himanshu.eID<<endl;
    // cout<<"The vale of Himanshu Favorate Charater : "<<himanshu.favChar<<endl;
    // cout<<"The vale of Himanshu Salary: "<<himanshu.salary<<endl;

    // union money m1;
    // m1.rice = 78;
    // m1.car = 'C';
    // cout<<m1.car;

    enum Meal{ breakfast, lunch, dinner };
    Meal m1 = breakfast;
    cout<<(m1==0);
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    
    return 0;
};