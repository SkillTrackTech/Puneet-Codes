#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    while (rev > 0) {
        cout << rev % 10 << " ";
        rev = rev / 10;
    }
    
    return 0;
}
