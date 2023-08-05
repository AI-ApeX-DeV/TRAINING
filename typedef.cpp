#include<iostream>
using namespace std;
#include<map>
int main()
{
    typedef int a;
    a b=10;
    cout<<b<<endl;
    typedef map<string,map<string,double> > fare;
    fare f;
    f["delhi"]["mumbai"]=1000;
    f["delhi"]["chennai"]=2000;
    return 0;

}