#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        
        {

            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) 
            {
                cout << "* ";
            } 
            else
            {
                cout << "  "; // Two spaces to align with "* "
            }
        }
        cout << endl;
    }

    return 0;
}
