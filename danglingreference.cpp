#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    *p=42;
    cout<<*p<<endl;
    delete p;
    *p=20;
    cout<<*p;
    return 0;
}