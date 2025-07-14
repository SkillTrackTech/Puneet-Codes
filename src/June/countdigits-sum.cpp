#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0;
    cout<<"Enter the value of n "<<endl;
    cin >> n;

    if (n == 0) {
        count = 1;
    }

    while (n != 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
        count = count + 1;
    }

    cout << "Digits: " << count << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
