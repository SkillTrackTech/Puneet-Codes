#include <iostream>
using namespace std;

float findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    float average = (float)sum / size;
    return average;
}

int main() {
    int arr[3];

    cout << "Enter 3 numbers:\n";
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    float avg = findAverage(arr, 3);

    cout << "Average = " << avg << endl;

    return 0;
}
