#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[10];
    p[2]=5;
    p[1]=6;
    cout<<p[1]<<" "<<p[2]<<endl;
    delete[] p;
    cout<<p[1]<<" "<<p[2];   
    return 0;
}