#include <iostream>
using namespace std;

int binarysearch(int *a, int l, int r, int k)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2; // Correct way to calculate the middle index

        if (a[mid] == k)
        {
            return mid;
        }
        else if (k < a[mid])
        {
            return binarysearch(a, l, mid - 1, k);
        }
        else
        {
            return binarysearch(a, mid + 1, r, k);
        }
    }
    return -1;
}

int main()
{
    int q[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Sorted array
    int a = binarysearch(q, 0, 9, 7); // Use indices 0 to 9

    if (a == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << a << endl;
    }
    return 0;
}
