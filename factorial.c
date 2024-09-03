#include<iostream>
using namespace std;
int main(){
    int fact=1,num;
    cout<<"Enter the Number: ";
    cin>>num;
    if(num>=0){
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"The factorial of a given number is "<<fact;
    }
    else{
        cout<<"Invalid Number";
    }
    return 0;
}
