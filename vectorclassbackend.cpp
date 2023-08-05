#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<string,vector<string>> friends;
    friends["sachin"].push_back("rahul");
    friends["sachin"].push_back("sourav");
    friends["sachin"].push_back("virat");
    friends["rahul"].push_back("sachin");
    friends["rahul"].push_back("sourav");
    friends["sourav"].push_back("sachh");
    cout<<friends["sachin"][2]<<endl;
}