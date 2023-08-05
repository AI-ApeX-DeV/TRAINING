#include<iostream>
#include<map>
#include<vector>
#include<set>
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
    cout<<"lets deal with sets"<<endl;
    map<string,set<string> > friendd;
    friendd["sachin"].insert("rahul");
    friendd["sachin"].insert("sourav");
    friendd["sachin"].insert("virat");
    friendd["sachin"].insert("rahul");
    friendd["rahul"].insert("sachin");
    friendd["rahul"].insert("sourav");
    cout<<friendd["sachin"].count("rahul")<<endl;


}