#include <iostream>

using namespace std;

int main()
{
    int coins = 21;
    string player1;
    string player2;
    int number;
    int totalnumber;
    totalnumber = coins;
    bool winner = false;

    cout << "Enter the starting player's name " <<endl;
    cin >> player1;
    cout << "Enter the starting player's name "<<endl;
    cin >> player2;
    while(!winner)
    {
        if (totalnumber >= 0)
        cout << "the game contains " << totalnumber << " coins" << endl;
        cout<<"--welcome to the game--" <<endl;
        cout << "Player1 " << player1<<endl;
        cout<<"enter number of coins to remove"<<endl;
        cin>>number;
        if (number > 0 && number < 4)
        {
            totalnumber -= number;
        }
        else
        {
        cout << "number must be between 1 and 3 " << endl;
        }

        if (totalnumber == 0)
        {
            cout<<"game over player1"<<player1<<"is the looser"<<endl;
            break;
        }

        //---------------------------------------------------------------------------------

        if (totalnumber >= 0)
        cout << "the game contains " << totalnumber << " coins" << endl;
        cout << "player2 " << player2<<endl;
        cout<<"enter number of coins to remove"<<endl;
        cin>>number;

        if (number > 0 && number < 4)
        {
            totalnumber -= number;
        }
        else
        {
            cout << "number must be between 1 and 3 " << endl;
        }


        if (totalnumber == 0)
        {
            cout<<"game over player2"<<player2<<"is the looser"<<endl;
            break;
        }


       } if (number >= totalnumber) {
            cout<<"--error--"<<"please enter the number smaller or equal coins number ";


        }





    return 0;
}
