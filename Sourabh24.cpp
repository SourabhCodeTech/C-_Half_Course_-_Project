#include<iostream>
using namespace std;

class Employee {
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter The ID: ";
            cin>>id;
            count++;
        }
        
        void getData(void){
            cout<<"The ID of This Employee is: "<<id<<" and The Count Number of This Employee is: "<<count<<endl;
        }
        static void getcount(void){
            // cout<<id; // Thrown an error as id is not static variable
             cout<<"The Value of Count is: "<<count<<endl;
        }
};

// Count is the static data Member of class Employee
int Employee::count = 2000; // Default value is 0

int main(){
    Employee Sourabh, Rohan, Harry;

    // Sourabh.id;
    // Sourabh.count; // Connot do this as id and count are private

    Sourabh.setData();
    Sourabh.getData();
    Employee::getcount();

    Rohan.setData();
    Rohan.getData();
    Employee::getcount();

    Harry.setData();
    Harry.getData();
    Employee::getcount();
    return 0;
};