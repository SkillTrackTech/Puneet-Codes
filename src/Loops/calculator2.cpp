#include <iostream>
using namespace std;

int main() {
    int c;
    float a, b;
    while (true) {
        cout << "\n1.Add  2.Subtract  3.Multiply  4.Exit\nChoice: ";
        cin >> c;
        if (c == 4) break;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (c == 1) cout << "Result: " << a + b << endl;
        else if (c == 2) cout << "Result: " << a - b << endl;
        else if (c == 3) cout << "Result: " << a * b << endl;
        else cout << "Invalid choice.\n";
    }
    return 0;
}
