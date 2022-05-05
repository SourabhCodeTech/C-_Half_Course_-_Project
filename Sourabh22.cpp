// OOPs - Classes and Object

// C++ --->> Initially Called ==>> C With Classes by Stroustroup
// C++ --->> Extension of Structures (in C)
// Structures Had Limitations 
    // --->> Members are Public
    // --->> No Methods
// Classes --->> Structures + More
// Classes --->> can have Methods and Properties
// Classes --->> can Make few Members as Private & few as Public
// Structures in C++ are typedefed
// You can Declare objects along with the class like this:
    /*
        class Employees{
            // Class Definition
        } sourabh, rohan, mohan, lovish;
    */
    // sourabh.salary = 8 Make no sence if salary is Private

/********** Nesting of Members Functions *********/


#include<iostream>
#include<string>
using namespace std;

class binary{
    private: // --->> This will Optional. and Why is it Optional --->> Default Class Member are Private.
        string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter The Binary Number: ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format!";
            exit(0);
        };
    };
}

void binary :: ones_compliment(void){
    chk_bin();
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        };
    };
}

void binary :: display(void){
    cout<<"\nDisplaying Your Binary Number: ";
    for(int i = 0; i < s.length(); i++){
        cout<<(s.at(i));
    };
}

int main(){

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
};