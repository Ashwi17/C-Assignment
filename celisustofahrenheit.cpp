#include<iostream>
using namespace std;
int main(){
    double C,F;
    cout<<"Enter the celsius number: ";
    cin>>C;
    F = C * (9/5) + 32;
    cout<<"The temperature of celsius to fahrenheit is: "<<F;
    return 0;
}
