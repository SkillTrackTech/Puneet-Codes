#include <iostream>
using namespace std;

int main() {
    int n, d, small = 9, large = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        small = large = 0;
    }

    while (n > 0) {
        d = n % 10;           
        if (d < small) small = d;
        if (d > large) large = d;
        n /= 10;              
    }

    cout << "Smallest digit: " << small << endl;
    cout << "Largest digit: " << large << endl;

    return 0;
}
