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

    vector<vector<int> > v2(5,vector<int>(5,1));
    cout<<v2.size()<<endl;
    cout<<v2[0].size()<<endl;

    for(size_t i=0;i<v2.size();i++)
    {
        for(size_t j=0;j<v2[i].size();j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }

}