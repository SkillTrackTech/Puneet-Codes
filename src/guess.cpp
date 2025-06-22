#include <iostream>
using namespace std;

int main() {
    int number = 7;
    int guess;
/*proper syntax of for loop:
 for(intilization,condition,updation)
    loop body using c++ syntax and symbol
*/
    for (int i = 1; true; i++) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Correct! You guessed it in " << i << " attempts." << endl;
            break;
        } else if (guess < number) {
            cout << "Too low. Try again." << endl;
        } else {
            cout << "Too high. Try again." << endl;
        }
    }

    return 0;
}


