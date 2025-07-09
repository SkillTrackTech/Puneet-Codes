#include <iostream>
using namespace std;
int main() {
    int a[ ] = {1, 2, 2, 2, 3, 4};  
    int x = 2;
    int count = 0;
    for(int i = 0; i < 6; i++) {
        if(a[i] == x) {
            count++;
        }
    }
    cout << x << " appears " << count << " times.\n";
    return 0;
}
