#include<iostream>
using namespace std;
int main(){
    int num,num1;
    cout<<"Enter your Table Number: ";
    cin>>num;
    cout<<"Enter your Bottom up Number:";
    cin>>num1;
    for(int i=0;i<=num1;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}
