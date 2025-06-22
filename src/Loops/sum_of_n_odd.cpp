// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     cout << N * N;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int number = 1;

    cout << "Enter the value of N: ";
    cin >> N;

    int count = 0;
    while (count < N) {
        sum = sum + number;
        number = number + 2;
        count = count + 1;
    }

    cout << "Sum of first " << N << " odd numbers is: " << sum << endl;

    return 0;
}