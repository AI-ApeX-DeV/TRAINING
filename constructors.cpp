#include<iostream>
using namespace std;
struct cons
{
    int a,b,c;
    cons()
    {
        a=b=c=3;
        cout<<"the value of a,b,c in intitial constructor are : "<<a<<" "<<b<<" "<<c<<endl;
    }
    cons(int z)
    {
        a=b=c=z;
        cout<<"the value of a,b,c in second constructor are : "<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main()
{
    cons a(99);
    cons b;
    return 0;

}