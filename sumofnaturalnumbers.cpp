#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the Natural Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of natural number is: "<<sum;
    return 0;
}
