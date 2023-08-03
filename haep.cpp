#include<iostream>
using namespace std;
class heapp
{
    public:
    int *g()
    {
        int *p;
        p=new int;
        *p=42;
        return p;
    }
};
int main()
{
    heapp q;
    int *a;
    a=q.g();
    cout<<*a<<endl;
    delete a;
    return 0;
}