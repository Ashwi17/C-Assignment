#include<iostream>
using namespace std;
int main(){
    int num[6];
    cout<<"Enter the Numbers: \n";
    for(int i=1;i<=6;i++){
       cin>>num[i];
       if(num[i]%5==0){
           continue;
       }
       else{
       cout<<"The numbers are not divisible by 5: "<<num[i]<<endl;
    }
    }
}
