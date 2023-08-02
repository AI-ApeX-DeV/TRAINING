#include<iostream>
using namespace std;
struct cons
{
    int x,y,z;
    cons(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    cons operator+(cons b)
    {
        return cons(x+b.x,y+b.y,z+b.z);
    }
    cons operator*(int b)
    {
        return cons(x*b,y*b,z*b);
    }
};
int main()
{
    cons a(1,1,1),n(2,2,2);
    int x=2;
    cons p(0,0,0);
    p=a+n;
    cout<<p.x<<" "<<p.y<<" "<<p.z<<endl;
    p=n*x;
    cout<<p.x<<" "<<p.y<<" "<<p.z<<endl;
}