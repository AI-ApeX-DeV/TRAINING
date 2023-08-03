#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *names[5];
    char buffer[50];

    for (int i = 0; i < 5; i++) {
        cin >> buffer;
        int L = strlen(buffer) + 1;
        names[i] = new char[L];
        strcpy(names[i], buffer);
    }

    // Display the strings and their individual memory usage
    for (int i = 0; i < 5; i++) {
        cout << "String[" << i << "]: " << names[i] << ", Length: " << strlen(names[i]) << " bytes" << endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<sizeof(names[i])<<endl;
    }

    

    // Deallocate memory for each name
    for (int i = 0; i < 5; i++) {
        delete[] names[i];
    }

    char good[5][20];
    for (int i = 0; i < 5; i++) {
        cin >> good[i];
    }

    // memory allocated
    for(int i=0;i<5;i++)
    {
        cout<<sizeof(good[i])<<endl;
    }

    // Display the strings and their individual memory usage


    return 0;
}
