#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float p,r,t,si;
    cout<<"Enter the Principal amount: ";
    cin>>p;
    cout<<"Enter the Rate of interest: ";
    cin>>r;
    cout<<"Enter the Time in years: ";
    cin>>t;

    si=(p*r*t)/100;
    cout<<"The Simple Interest is; "<<si<<endl;

    return 0;
}