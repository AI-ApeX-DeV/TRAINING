#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<string,int> pages;
    pages["cengage"]=200;
    pages["arihant"]=300;
    pages["pearson"]=400;
    pages["wiley"]=500;
    cout<<"the pages of pearson are : "<<pages["pearson"]<<endl;
    cout<<"the pages of cengage are : "<<pages["cengage"]<<endl;
    char string[20];
    cin.getline(string,20);
    if(pages.count(string)>0)
    {
        cout<<"the pages of "<<string<<" are : "<<pages[string]<<endl;
    }
    else
    {
        cout<<"the book is not present"<<endl;
    }
}