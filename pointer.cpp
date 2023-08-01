#include<iostream>
using namespace std;
int change(int *a)
{
    *a=5;
}
int main()
{
    int *v;
    int a=10;
    v=&a;
    *v=20;
    cout<<a<<endl;
   return 0; 
}