#include <iostream>
#include <functional>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sq(int a, int b, function<int(int, int)> f)
{
    return f(a, b);
}

int main()
{
    cout << sq(5, 6, sum);
}
