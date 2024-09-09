#include<iostream>
using namespace std;
int main()
{
   string a="food";
    string *ptr=&a;
    cout<<*ptr<<endl;
    return 0;
}
