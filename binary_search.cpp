#include<iostream>
using namespace std;
int binarysearch(int *a, int b, int k)
{
    int l = 0;
    int r = b - 1; // Adjust r to represent the last valid index
    int mid;
    while (l <= r) // Corrected loop condition
    {
        mid = (l + r) / 2;
        if (a[mid] == k)
        {
            return mid;
        }
        else if (k < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1; // Return -1 to indicate that the element was not found
}

int main()
{
    int q[]={1,2,3,4,5,6,7,8,9,0};
    int a=binarysearch(q,10,99);
    if(a==-1)
    {
        cout<<"element not found";
    }
    else
    {
    cout<<a;
    }
    return 0;
}