#include <iostream>
using namespace std;

int main() {
    char option;

    cout << "Choose an option:\n";
    cout << "A. Print 'Hello'\n";
    cout << "B. Print 'Hi'\n";
    cout << "C. Print 'Hey'\n";
    cout << "Enter your choice (A/B/C): ";
    cin >> option;

    switch (option) {
        case 'A':
        case 'a':
            cout << "Hello!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Hi!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Hey!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (A/B/C)." << endl;
            break;
    }

    return 0;
}
