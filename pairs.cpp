#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p1,p2;
    p1.first=10;
    p1.second="hello";
    p2=make_pair(20,"world");
    p2=pair<int,string>(30,"bye");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;

}