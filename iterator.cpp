#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> pages;
    pages["cengage"]=200;
    pages["arihant"]=300;
    pages["pearson"]=400;
    pages["book"]=700;
    pages["wiley"]=500;
    map<string,int>population={{"india",100},{"usa",200},{"uk",300}};
    unordered_map<string,int>::iterator it;
    for(it=pages.begin();it!=pages.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(auto it=population.begin();it!=population.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(auto it:population)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}