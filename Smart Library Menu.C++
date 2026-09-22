#include <iostream>
using namespace std;
int main()
{
    int book[10];
    int n = 0;
    int choice;
    int searchID;

    do
        {
            cout<<"\n\n====SMART LIBRARY====";
            cout<<"\n1, Add Book";
            cout<<"\n2, Display Books";
            cout<<"\n3, Search Book";
            cout<<"\n4, Exit";
            cout<<"\nEnter your choice: ";
            cin >> choice;

            if (choice == 1) 
            {
                cout<<"Enter Book Id: ";
                cin >> book[n];
                n++;
                cout <<"Book Added: ";
            }
            else if (choice == 2)
            {
                cout <<"\nBooks in Library:\n ";
                for (int i = 0; i < n; i++)
                    {
                        cout << book[i]<<endl;
                    }
            }
            else if (choice == 3)
            {
                cout<< "Enter Book ID to Search: ";
                cin >> searchID;
                bool found = false;
                for (int i = 0; i < n; i++)
                    {
                        if (book[i] == searchID)
                        {
                            found = true;
                        }
                        
                    }
                if (found)
                {
                    cout<<"Book found\n";
                }
                else
                {
                    cout<<"Not found\n";
                }
            }
            else if (choice == 4)
            {
                cout<<"Thanks/n";
                cout<<"Exiting...\n";
            }
            else
            {
                cout<<"Invalid choice\n";
            }
            
        }
        while (choice !=4);
return 0;
}
        
    
 
