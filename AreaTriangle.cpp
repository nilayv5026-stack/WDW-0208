#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,s,A;
    cout<<"Enter the First Side of Triangle; ";
    cin>>a;
    cout<<"Enter the Second Side of Triangle: ";
    cin>>b;
    cout<<"Enter the Third Side of Triangle: ";
    cin>>c;

    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The Area of Triangle is: "<<A<<endl;

    return 0;
}