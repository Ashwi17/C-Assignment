#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st Number: ";
    cin>>a;
    cout<<"Enter the 2nd Number: ";
    cin>>b;
    cout<<"Enter the 3rd Number: ";
    cin>>c;
    if(a>b&&a>c){
        cout<<"The largest number is: "<<a;
    }
    else if(b>a&&b>c){
        cout<<"The largest number is: "<<b;
    }
    else{
        cout<<"The largest number is: "<<c;
    }
    return 0;
}
