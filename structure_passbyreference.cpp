#include<iostream>
using namespace std;
struct point{int x;int y;};
void change(point &a,point &b)
{
    a={9,8};
    b={7,6};
}
int main()
{
    point x={1,2};
    point y={3,4};
    change(x,y);
    cout<<x.x<<" , "<<x.y<<endl;
    cout<<y.x<<" , "<<y.y<<endl;
}