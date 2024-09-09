#include<iostream>
using namespace std;
int main()
{
    int a=100,sum=0;
    for(int i=100;i<120;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    float average=sum/10;
  cout<<"The average of 10 even numbers start from 100: "<<average;
    return 0;
}
