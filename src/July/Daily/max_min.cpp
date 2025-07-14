#include <iostream>
using namespace std;
int main() {
    int n, x, max, min;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    cin >> x;
    max = min = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > max) max = x;
        if (x < min) min = x;
    }
    cout << "Max: " << max << "\nMin: " << min << endl;
    return 0;
}
