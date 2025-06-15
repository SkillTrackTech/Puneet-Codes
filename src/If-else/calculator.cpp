#include <iostream>
using namespace std;

int calculator() {
    char a;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> a;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    if (a == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (a == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (a == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (a == '/') {
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
// ✅ Add this:
int main() {
    return calculator();
}
