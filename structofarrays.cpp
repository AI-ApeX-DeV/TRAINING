#include<iostream>
using namespace std;
#include<cstring>
struct wow {char q[10][10];};
int main()
{
    wow a;
    strcpy(a.q[1], "cool man");
    cout<<a.q[1];
    return 0;
}