#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    vector<int> arr(n); 

    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


