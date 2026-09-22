#include <iostream>
using namespace std;

int main() {
	int rollNumbers[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter roll no of student " << i + 1 << ": ";
		cin >> rollNumbers[i];
	}

	cout << "\nRoll no of the students:\n";
	for (int i = 0; i < 5; i++) {
		cout << rollNumbers[i] << endl;
	}

	return 0;
}
