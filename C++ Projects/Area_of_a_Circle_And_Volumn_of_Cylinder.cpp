#include<iostream>
using namespace std;

int main(){
    // Calculate Area of a Circle.
    // The value of PI is: 3.14 or 22/7 both Are value of Equal.
    // r Means -> Radius, h Means -> Height, b Means -> Breadth, l Means -> Length
    // Area of a Circle -> pi * (r * r)
    int r;
    cout<<"\nEnter Raduis use to Calculate Area of a Circle: ";
    cin>>r;

    cout<<"Area of a Circle is: "<<(3.14 * r)<<endl;
    cout<<"Radius is: "<<r;

    // Calculate Volumn of a Cylinder.
    // The value of PI is: 3.14 or 22/7 both Are value of Equal.
    // r Means -> Radius, h Means -> Height, b Means -> Breadth, l Means -> Length
    // Area of a Circle -> (3.14 * (r * r) * h)

    int h;
    cout<<"\n\nEnter Height use to Calculate Volumn of a Cylinder is: ";
    cin>>h;

    cout<<"\nVolumn of a Cyclinder is: "<<(3.14 * (r * r) * h)<<endl;
    cout<<"Radius is: "<<h<<endl;
    cout<<"Height is: "<<r<<endl;
    return 0;
};