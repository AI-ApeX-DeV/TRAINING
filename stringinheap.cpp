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
    char *ptr;
    public:
        string()
        {
            ptr=NULL;
        }
    void print()
    {
        if(ptr!=NULL)
        {
            cout<<ptr<<endl;
        }
        else
        {
            cout<<"NULL"<<endl;
        }
    }

string& operator=(const char *rhs)
{
    delete[] ptr;
    ptr=new char[length(rhs)+1];
    scopy(ptr,rhs);
    return *this;
}

string& operator=(const string& rhs)
{
    if(this==&rhs)
    {
        return *this;
    }
    delete ptr;
    ptr=new char[length(rhs.ptr)+1];
    scopy(ptr,rhs.ptr);
    return *this;
}

char& operator[](int i)
{
    return ptr[i];
}

string operator+(const string& rhs)
{
    string temp;
    temp.ptr=new char[length(ptr)+length(rhs.ptr)+1];
    scopy(temp.ptr,ptr);
    scopy(temp.ptr,rhs.ptr,length(ptr));   
    return temp;
}

~string()
{
    delete ptr;
}

string(const string& rhs)
{
    ptr=new char[length(rhs.ptr)+1];
    scopy(ptr,rhs.ptr);
}
};


int main()
{

}
