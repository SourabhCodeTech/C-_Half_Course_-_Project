#include<iostream>
using namespace std;

int main(){
    // Arrays Example
    int marks[] = {45, 37, 69, 36, 49};

    int mathmarks[5];
    mathmarks[0] = 0;
    mathmarks[1] = 1;
    mathmarks[2] = 2;
    mathmarks[3] = 3;
    mathmarks[4] = 4;
    // Print Marks of Students
    // You Can Change The Value of an Array
    marks[2] = 100;
    // cout<<"These are Marks: "<<endl;
    // cout<<"The Marks of 1 Student: "<<marks[0]<<endl;
    // cout<<"The Marks of 2 Student: "<<marks[1]<<endl;
    // cout<<"The Marks of 3 Student: "<<marks[2]<<endl;
    // cout<<"The Marks of 4 Student: "<<marks[3]<<endl;
    // cout<<"The Marks of 5 Student: "<<marks[4]<<endl;
    // Print Math Marks of Students
    // cout<<"\n\nThese are Math Marks: "<<endl;
    // cout<<"The Math Marks of 1 Student: "<<mathmarks[0]<<endl;
    // cout<<"The Math Marks of 2 Student: "<<mathmarks[1]<<endl;
    // cout<<"The Math Marks of 3 Student: "<<mathmarks[2]<<endl;
    // cout<<"The Math Marks of 4 Student: "<<mathmarks[3]<<endl;
    // cout<<"The Math Marks of 5 Student: "<<mathmarks[4]<<endl;


    //Print the marks of student in for loop
    // for(int i = 0; i < 5; i++){
    //     cout<<"The Marks of "<<i<<" Student is: "<<marks[i]<<endl;
    // }

    /*************** Quick Quiz: Print the marks of student using while and do-while loop ********************/

    //Print the marks of student in do loop
    // int i = 0;
    // while(i < 5){
    //    cout<<"The Marks of "<<i<<" Student is: "<<marks[i]<<endl;
    //     i++;
    // }

    //Print the marks of student in do-while loop
    // int i = 0;
    // do{
    //     cout<<"The Marks of "<<i<<" Student is: "<<marks[i]<<endl;
    //     i++;
    // }while(i < 5);


    /********** Pointers and Arrays **********/
    // int* p = marks;
    // cout<<*(p++);
    // cout<<*p;
    // cout<<*(++p);
    // cout<<"The value of *p is: "<<*p<<endl;
    // cout<<"The value of *(p + 1) is: "<<*(p + 1)<<endl;
    // cout<<"The value of *(p + 2) is: "<<*(p + 2)<<endl;
    // cout<<"The value of *(p + 3) is: "<<*(p + 3)<<endl;
    // cout<<"The value of *(p + 4) is: "<<*(p + 4)<<endl;

    return 0;
};