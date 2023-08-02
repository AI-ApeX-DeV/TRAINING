#include<iostream>
using namespace std;

struct point {
    int x;
    int y;
};

struct wow {
    int x;
    point* y;
};

int main() {
    point a = {2, 4};
    wow b;
    b.x = 9;
    b.y = new point; // Allocate memory for 'y'
    b.y->x = 9;
    b.y->y = 8;
    cout << b.y->x << " " << b.y->y << endl;

    delete b.y; // Free the memory allocated for 'y'
    return 0;
}
