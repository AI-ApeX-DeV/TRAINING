#include <iostream>
using namespace std;

void changestr(const char *a, int n)
{
    char p = 'a';
    for (int i = 0; i < n; i++)
    {
        a[i] = p;
        p++;
    }
}

int main()
{
    char p[14] = "this is cool";
    cout << p; // Print the original string
    changestr(p, 13); // No need to include the null terminator in the function call
    cout << p; // Print the modified string
    return 0;
}
