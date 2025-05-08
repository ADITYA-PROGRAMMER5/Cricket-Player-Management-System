#include <iostream>
using namespace std;

const int Max_player = 11;

class Player {
    public:
    int jerseyNumber;
    string Name;
    int runs;
    int wickets;
    int matchPlayed;

    void enterData() {
        cout<<"Enter Player Jersey Number: ";
        cin>>jerseyNumber;
        cout<<"Enter Player Name: ";
        cin>>Name;
        cout<<"Enter Player Runs: ";
        cin>>runs;
        cout<<"Enter Player Wicket taken: ";
        cin>>wickets;
        cout<<"Enter Player Match Played: ";
        cin>>matchPlayed;
    }

    void getData() {
        cout<<"\nJersey: "<<jerseyNumber;
        cout<<"\nName: "<<Name;
        cout<<"\nRuns: "<<runs;
        cout<<"\nWicket: "<<wickets;
        cout<<"\nTotal Match Played: "<<matchPlayed;
    }

    int getScore() {
        return runs + wickets * 20;
    }
};

class playerManagement {
    
};

int main () {
    int choice;

    do
    {
        cout << "\n--- Player Management System ---\n";
        cout << "1. Add Player\n";
        cout << "2. Remove Player\n";
        cout << "3. Search Player\n";
        cout << "4. Update Player\n";
        cout << "5. Display All Players\n";
        cout << "6. Display Top 3 Players\n";
        cout << "7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            
            break;

        case 2:
            
            break;

        case 3:
            
            break;
        
        case 4:
            
            break;

        case 5:

            break;

        case 6:

            break;

        case 7:
            cout<<"Exiting.....\n";
            cout<<"Thank you for using Player Management System";
            break;

        default:
            cout<<"Invalid Choice, Try Again";
        }
    } while (choice != 7);
    
    
return 0;
}