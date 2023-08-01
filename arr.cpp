#include <iostream>
using namespace std;

void changearr(int *a)
{
    a[0] = 7;
    a[1] = 8;
    a[2] = 9;
    a[3] = 10;
}

int main()
{
    int q[4] = {1, 2, 3, 5};
    cout << q << endl;
    int i=0;
    while (i < 4)
    {
        cout << i << " : " << q[i] << endl;
        i++;
    }
    changearr(q);
    i = 0;
    while (i <= 3)
    {
        cout << i << " : " << q[i] << endl;
        i++;
    }
    return 0;
}
