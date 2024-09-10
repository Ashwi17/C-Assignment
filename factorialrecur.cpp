#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    long facti;
    cout<<"Enter the number: ";
    cin>>n;
    facti=factorial(n);
    cout<<"The factorial of the number is: "<<facti;
    return 0;
}
