#include<iostream>
using namespace std;
struct name
{
    int x,y,z;
    int sqrt()
    {
        return x*x+y*y+z*z;
    }
};
int main()
{
    name v;
    v={1,2,3};
    cout<<v.sqrt();
    return 0;
}