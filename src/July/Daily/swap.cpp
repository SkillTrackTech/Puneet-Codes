#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers x and y: ";
    cin >> x >> y;

    swap(x, y);

    cout << "After swapping:\n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    return 0;
}
