#include <iostream>
using namespace std;

int main() {
    int n, number;
    int evenCount = 0, oddCount = 0;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;

    return 0;
}
