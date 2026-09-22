#include <iostream>
using namespace std;

int main() {
    float marks[5];

    // Input marks for 5 students
    cout << "Enter marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Sort array in descending order using Bubble Sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                // Swap values
                float temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display sorted marks
    cout << "\nMarks from Highest to Lowest (Descending Order):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}
