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
    
return 0;
}