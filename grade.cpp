#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter your score: ";
    cin>>score;
    if(score==100){
        cout<<"Grade A";
    }
    else if(score>=90&&score<=99){
        cout<<"Grade B";
    }
    else if(score>=80&&score<=89){
        cout<<"Grade C";
    }
    else if(score>=70&&score<=79){
        cout<<"Grade D";
    }
    else if(score>=60&&score<=69){
        cout<<"Grade E";
    }
    else{
        cout<<"Fail";
    }
}
