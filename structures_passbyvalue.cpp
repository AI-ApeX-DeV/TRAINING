#include<iostream>
using namespace std;
struct point{int x;int y;};
point midpoint(point a,point b)
{
    point mid;
    mid.x=a.x+b.x;
    mid.y=a.y+b.y;
    return mid;
}
int main()
{
    point x={1,2};
    point y={3,4};
    cout<<midpoint(x,y).x<<" , "<<midpoint(x,y).y<<endl;
}