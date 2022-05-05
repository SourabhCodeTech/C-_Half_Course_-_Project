#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;
            cout<<"Enter The id of Employee: ";
            cin>>id;
        }

        void getId(void){
            cout<<"\nThe id of this Employee is: "<<id<<endl;   
        }
};

int main(){
    // Employee Sourabh, Harry, Shivam;
    // Sourabh.setId();
    // Sourabh.getId();

    Employee fb[44];
    for(int i = 0; i < 4; i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
};