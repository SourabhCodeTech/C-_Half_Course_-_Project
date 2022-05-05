#include<iostream>
using namespace std;

class Shop {
    int ItemId[100];
    int ItemPrice[100];
    int counter;
    public:
        void initCounter(void){
            counter = 0;
        };
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(){
    cout<<"Enter Your Item ID No. "<<(counter + 1)<<": ";
    cin>>ItemId[counter];
    
    cout<<"Enter Your Item Price: ";
    cin>>ItemPrice[counter];
    counter++;
}

void Shop :: displayPrice(){
    for(int i = 0; i < counter; i++){
        cout<<"\nThe Price of Item with ID "<<ItemId[i]<<" is: "<<ItemPrice[i];
    };
}

int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
};