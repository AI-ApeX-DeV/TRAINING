#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char names[5][20];

    for (int i = 0; i < 5; i++) {
        cin >> names[i];
    }

    // Display the strings and their individual memory usage
    for (int i = 0; i < 5; i++) {
        int length = 0;
        while (names[i][length] != '\0') {
            length++;
        }
        cout << "String[" << i << "]: " << names[i] << ", Length: " << length << " bytes" << endl;
    }

    return 0;
}
