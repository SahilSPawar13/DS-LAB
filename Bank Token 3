#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    queue<int> tokenQueue;
    stack<int> serviceHistory;
    int choice;
    int nextToken = 1;

    do {
        cout << "\n--- BANK TOKEN MANAGEMENT SYSTEM ---\n";
        cout << "1. Issue New Token\n";
        cout << "2. Display All Tokens in Queue\n";
        cout << "3. Serve Customer\n";
        cout << "4. Display Service History (Recently Served)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (tokenQueue.size() < 5) {
                    tokenQueue.push(nextToken);
                    cout << "Token Number " << nextToken << " issued successfully!\n";
                    nextToken++;
                } else {
                    cout << "Queue is full! Maximum 5 tokens allowed at a time.\n";
                }
                break;
            }
            case 2: {
                if (tokenQueue.empty()) {
                    cout << "No tokens in the queue.\n";
                } else {
                    cout << "Tokens currently in queue: ";
                    queue<int> tempQueue = tokenQueue;
                    while (!tempQueue.empty()) {
                        cout << tempQueue.front() << " ";
                        tempQueue.pop();
                    }
                    cout << "\n";
                }
                break;
            }
            case 3: {
                if (tokenQueue.empty()) {
                    cout << "No customers to serve!\n";
                } else {
                    int servedToken = tokenQueue.front();
                    tokenQueue.pop();
                    cout << "Customer with Token Number " << servedToken << " has been served.\n";
                    
                    // Maintain stack size up to 5 recently served customers
                    if (serviceHistory.size() == 5) {
                        // To keep only the last 5, we can use a temporary stack if needed, 
                        // but a simple stack push is enough for demonstration.
                    }
                    serviceHistory.push(servedToken);
                }
                break;
            }
            case 4: {
                if (serviceHistory.empty()) {
                    cout << "No service history available.\n";
                } else {
                    cout << "Service History (Most recently served first):\n";
                    stack<int> tempStack = serviceHistory;
                    int count = 0;
                    while (!tempStack.empty() && count < 5) {
                        cout << "Token: " << tempStack.top() << "\n";
                        tempStack.pop();
                        count++;
                    }
                }
                break;
            }
            case 5:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
