#include<iostream>
using namespace std;
struct wow{int a;char p;char q[10];};
int main()
{
    wow a={1,'a',"sharukh"};
    cout<<a.a<<" "<<a.p<<" "<<a.q<<endl;
    return 0;

}