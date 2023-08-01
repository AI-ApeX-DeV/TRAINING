#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose an option:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    int num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
            break;
    }

    return 0;
}
