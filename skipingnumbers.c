#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the Numbers: \n";
    for(i=1;i<=6;i++){
       cin>>i;
       if(i%5==0){
           continue;
       }
       else{
       cout<<"The numbers are not divisible by 5: "<<i<<endl;
    }
    }
}
