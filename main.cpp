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
    private:
    Player players[Max_player];
    int count;

    public:
    playerManagement() {
        count = 0;
    }

    void addPlayer () {
        if (count >= Max_player)
        {
            cout<<"Cannot add more player, max limit reached.";
        }
        players[count].enterData();
        count++;
        cout<<"Player Added Successfully"<<endl;
    }

    void removePlayer () {
        int jersey;
        cout<<"Enter Player Jersey Number: ";
        cin>>jersey;
        
        for (int i = 0; i < count; ++i)
        {
            if (players[i].jerseyNumber == jersey)
            {
                for (int j = 0; i < count - 1; ++j)
                {
                    players[j] = players[j + 1];
                }
                count--;
                cout<<"Player Removed Successfully\n"<<endl;
                return;
            }
        }
        cout<<"Player Not Founded, Try Again\n"<<endl;
    }
};

int main () {
    playerManagement management;
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
            management.addPlayer();
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