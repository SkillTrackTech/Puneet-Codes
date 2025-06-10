#include <iostream>

using namespace std;

int main() {
    int a, mark;
    int marks[10];  
    int count = 0; 

    cout << "Enter 1 to input marks or 0 to exit and display marks: ";
    cin >> a;

    if (a == 1) {

        cout << "Enter marks: ";
        cin >> mark;
        marks[count] = mark;  
        count ++;  
    } 
    else if (a == 0) {
        cout << "\nProgram End." << endl;
    } 
    else {

        cout << "Invalid input :" << endl;
    }

    if (count > 0) {
        cout << "\nMarks enter: ";
        for (int i = 0; i < count; i++) {
            cout << marks[i] << " "; 
        }
        cout << endl;
    }

    return 0;
}
