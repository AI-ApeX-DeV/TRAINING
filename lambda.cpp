#include<iostream>
#include<functional>
using namespace std;
int sum(int a,int b,function<int(int,int)>f)
{
    return f(a,b);
}
int main()
{
    int a=5;
    cout<<[a](int x){return x*x-a;}(6)<<endl;
    int q=8;
    int p=32;
    cout<<sum(7,8,[p,q](int x,int y){return x+y+p+q;});





    return 0;
}