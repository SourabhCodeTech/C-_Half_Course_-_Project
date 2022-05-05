#include<iostream>
using namespace std;

int main(){
    /* Loops in C++ */
    /* 
    There are Three types of Loop
    1) For Loop  
    2) While Loop 
    3) Do-While Loop
    */ 


    // For Loop
    // int i = 1;
    // cout<<i;
    // i++;

    //  Syntax For Loop
    // for(initialization; condition; updation){
    //     Loop body(C++ Code)
    // }

    // for(int i = 0; i <= 100; i++){
    //     cout<<i<<endl;
    // }

    // Example Infinite for Loop
    // for(int i = 0; 34 <= 100; i++){
    //     cout<<i<<endl;
    // }

    // While Loop in C++
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    // Printing 1 to 40 using while Loop
    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }
    // Example Infinite for Loop
    // int i = 1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do-While Loop in C++
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition)

    // Printing 1 to 40 using do-while Loop
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);
    // Example Infinite do-while Loop
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(true);

    // Table of Six in do-while Loop
    int i = 1;
    do{
        cout<<i*6<<endl;
        i++;
    }while(i<=10);



    return 0;
}