#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
    } 
    else if (n == 2) {
        cout << n << " is a prime number." << endl;     
    }
    else if (n == 3) {
        cout << n << " is a prime number." << endl; 
    }
    else if (n % 2 == 0) {
        cout << n << " is not a prime number." << endl;     
    }
    else if (n % 3 == 0) {
        cout << n << " is not a prime number." << endl;  
    }
    else {
        cout << n << " is a prime number." << endl; 
    }

    return 0;
}
 

