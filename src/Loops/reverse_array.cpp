#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[ ] = {1, 2, 3, 4, 5};
    reverse(begin(a), end(a));
    for (int x : a) cout << x << " ";
    return 0;
}
