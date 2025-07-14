#include <iostream>
using namespace std;

int main() {
    int number, sum;
    sum = 0;
    cin >> number;

    do {
        int lastDigit;
        lastDigit = number % 10;
        sum = sum + lastDigit;
        number = number / 10;
    } while (number > 0);

    cout << sum;
    return 0;
}
