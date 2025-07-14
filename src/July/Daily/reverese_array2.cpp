#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
