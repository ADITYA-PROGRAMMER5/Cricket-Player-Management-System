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
        cout<<"Jersey: "<<jerseyNumber;
        cout<<"Name: "<<Name;
        cout<<"Runs: "<<runs;
        cout<<"Wicket: "<<wickets;
        cout<<"Total Match Played: "<<matchPlayed;
    }

    int getScore() {
        return runs + wickets * 20;
    }
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
    } while (choice != 7);
    
    
return 0;
}