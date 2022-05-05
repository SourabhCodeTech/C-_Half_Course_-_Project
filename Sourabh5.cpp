#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number_first;
    int number_second;
    cout<<"Enter Your First Number:\n";
    cin>>number_first;
    cout<<"Enter Your Second Number:\n";
    cin>>number_second;
    cout<<"The Sum of First Number and Second Number: "<<number_first+number_second;
    return 0;

    // << is called Insertion operator 
    // >> is called Extraction operator 
}
