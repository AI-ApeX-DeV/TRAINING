#include<iostream>
using namespace std;
void print(char *a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    char a[]="hello";
    char b[]="good";
    char c[]="nice";
    char *arr[3]={a,b,c};
    print(arr,3);
    return 0;
}