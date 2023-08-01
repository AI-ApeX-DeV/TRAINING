#include <iostream>
using namespace std;

int max(int *a, int size)
{
    int maxe = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[maxe] < a[i])
        {
            maxe = i;
        }
    }
    return maxe;
}

void selectionsort(int *q, int size)
{
    int maxa;
    for (int i = size; i > 1; i--)
    {
        maxa = max(q, i);
        swap(q[maxa], q[i - 1]);
    }
}

void print(int *q, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    int p[] = {6, 3, 9, 8, 4, 1, 2, 0, 7, 5};
    int size = sizeof(p) / sizeof(p[0]);

    selectionsort(p, size);
    print(p, size);

    return 0;
}
