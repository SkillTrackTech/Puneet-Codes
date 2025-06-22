#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    do {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    } while (num != 0);

    cout << "Reversed number: " << rev << endl;
    return 0;
}
