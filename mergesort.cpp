#include<iostream>
using namespace std;

void merge(int *a, int la, int *b, int lb, int *s) {
    int uf = 0, vf = 0;
    for (int sb = 0; sb < la + lb; sb++) {
        if (uf < la && vf < lb) {
            if (a[uf] < b[vf]) {
                s[sb] = a[uf];
                uf++;
            } else {
                s[sb] = b[vf];
                vf++;
            }
        } else if (uf < la) {
            s[sb] = a[uf];
            uf++;
        } else {
            s[sb] = b[vf];
            vf++;
        }
    }
}

void mergesort(int *s, int n) {
    if (n == 1) {
        return;
    }
    int *U = new int[n / 2];
    int *V = new int[n - n / 2];
    for (int i = 0; i < n / 2; i++) {
        U[i] = s[i];
    }
    for (int i = 0; i < n - n / 2; i++) {
        V[i] = s[n / 2 + i];
    }
    mergesort(U, n / 2);
    mergesort(V, n - n / 2);
    merge(U, n / 2, V, n - n / 2, s);

    delete[] U;
    delete[] V;
}

int main() {
    int a[] = {0, 9, 5, 3, 7, 6, 1, 4, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);

    mergesort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
