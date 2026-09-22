#include <iostream>
using namespace std;

int main() {
    int rollNos[5];
    int searchRollNo;
    bool found = false;

    // Input 5 roll numbers into array
    cout << "Enter roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> rollNos[i];
    }

    // Input the roll number to search
    cout << "\nEnter roll number to search: ";
    cin >> searchRollNo;

    // Search the array
    for (int i = 0; i < 5; i++) {
        if (rollNos[i] == searchRollNo) {
            found = true;
            break;
        }
    }

    // Display result
    if (found) {
        cout << "Student found" << endl;
    } else {
        cout << "Student not found" << endl;
    }

    return 0;
}
