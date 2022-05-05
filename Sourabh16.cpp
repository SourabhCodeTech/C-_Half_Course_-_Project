#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
};

// This will not swap a and b
void swap(int a, int b){// temp  a  b
    int temp = a;       //    4  4  5
    a = b;              //    4  5  5
    b = temp;           //    4  5  4
};

// Call by Reference Using Pointers
void swapPointer(int* a, int* b){// temp  a  b
    int temp = *a;               //    4  4  5
    *a = *b;                     //    4  5  5
    *b = temp;                   //    4  5  4
};

// Call by Reference Using C++ Reference Variable
// int &
void swapReferenceVar(int &a, int &b){// temp  a  b
    int temp = a;                     //    4  4  5
    a = b;                            //    4  5  5
    b = temp;                         //    4  5  4
    // return a;
};


int main(){
    int x = 4, y = 5; 
    cout<<"The sum of 4 and 5 is: "<<sum(x, y)<<endl;
    // swap(x, y); // This will not Swap a and b
    // swapPointer(&x, &y); // This will Swap a and b using pointer reference
    swapReferenceVar(x, y); // This will Swap a and b using reference variable
    // swapReferenceVar(x, y) = 766; // This will Swap a and b using reference variable
    cout<<"The value of x is: "<<x<<endl<<"The value of y is: "<<y<<endl;
    return 0;
};