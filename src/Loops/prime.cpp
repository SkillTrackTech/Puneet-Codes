#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;

    for (i = 2; i <= n; i++) {
        int isPrime = 1;
        for (j = 2; j < i; j++) {        //Explain this loop
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) cout << i << " ";
    }
    return 0;
}
