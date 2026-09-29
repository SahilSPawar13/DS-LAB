#include <iostream>
using namespace std;

int main()
{
    int rollNo[10];
    float marks[10];
    int count = 0, choice;

    do
    {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count >= 10)
            {
                cout << "Storage full!\n";
                break;
            }
            cout << "Enter roll no: ";
            cin >> rollNo[count];
            cout << "Enter marks: ";
            cin >> marks[count];
            count++;
            cout << "Student added successfully.\n";
            break;

        case 2:
            if (count == 0)
                cout << "No records found.\n";
            else
            {
                cout << "\nRoll No\tMarks\n";
                for (int i = 0; i < count; i++)
                    cout << rollNo[i] << "\t" << marks[i] << endl;
            }
            break;

        case 3:
        {
            int roll;
            bool found = false;
            cout << "Enter roll no to search: ";
            cin >> roll;
            for (int i = 0; i < count; i++)
            {
                if (rollNo[i] == roll)
                {
                    cout << "Found -> Roll No: " << rollNo[i]
                         << ", Marks: " << marks[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student not found.\n";
            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
