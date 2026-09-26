#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float f,c;
    cout <<"Enter the Temperature in Fahrenheit: ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"The Temperature in Celsius is: "<<c<<endl;
    return 0;
}