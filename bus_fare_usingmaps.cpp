#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,map<string,double> > fare;
    fare["delhi"]["mumbai"]=1000;
    fare["delhi"]["chennai"]=2000;
    fare["delhi"]["kolkata"]=3000;
    fare["mumbai"]["delhi"]=1000;
    fare["mumbai"]["chennai"]=2000;
    fare["mumbai"]["kolkata"]=3000;
    return 0;
}