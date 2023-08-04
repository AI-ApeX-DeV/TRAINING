#include<iostream>
using namespace std;
int length(const char *s)
{
    int l=0;
    while(*s!=0)
    {
        l++;
        s++;
    }
    return l;
}
void scopy(char *d,const char *s,int l=0)
{
    d=d+l;
    while(*s!=0)
    {
        *d=*s;
        d++;
        s++;
    }
    *d=0;
}


class string
{
    char *p;
    public:
        string()
        {
            p=NULL;
        }
    void print()
    {
        if(p!=NULL)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<"NULL"<<endl;
        }
    }
};

int main()
{
    int q[]={1,2,3,4,5,8};
    int *p;
    p=q;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    return 0;
}
