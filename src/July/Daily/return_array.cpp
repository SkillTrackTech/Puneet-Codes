#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Maximum number = " << findMax(arr, 5);
    return 0;
}
