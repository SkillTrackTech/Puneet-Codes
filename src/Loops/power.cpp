#include <iostream>
using namespace std;

int main() {
    int a, b, result = 1;

    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;

    for (int i = 0; i < b; i++) {
        result = result * a;
    }

    cout << "Answer: " << result << endl;

    return 0;
}
