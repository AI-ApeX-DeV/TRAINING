#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    v.resize(5,'a');
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[4]<<endl;
}