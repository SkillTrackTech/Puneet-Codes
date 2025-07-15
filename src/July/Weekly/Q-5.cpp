#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    cout << "How many numbers? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n << endl;

    return 0;
}
