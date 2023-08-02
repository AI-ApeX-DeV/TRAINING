#include<iostream>
using namespace std;
struct point{int x;int y;};
int main()
{
    point a={1,2},*ptr;
    ptr=&a;
    cout<<a.x<<" , "<<a.y<<endl;
    cout<<ptr<<endl;
    *ptr={9,8};
    cout<<a.x<<" , "<<a.y<<endl;
    return 0;
}