#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout << endl;
    cout << "Welcome to Tic Tac Toe!" << endl;
    while(1)
    {
        vector<vector<char>> ttt(3, vector<char>(3,'_'));
        vector<char> player1(1);
        vector<char> player2(1);
        vector<int> arr1(2);
        vector<int> arr2(2);
        vector<int> playagain(1);
        int count = 9;
        int flag = 0;
        int win = 0;
        cout << endl;
        cout << "Player 1- Enter your symbol from X/O: ";
        cin >> player1[0];
        while(player1[0] != 'X' && player1[0] != 'O')
        {
            cout << endl;
            cout << "Wrong symbol entered! Enter again from X/O: ";
            cin >> player1[0];
        }
        if(player1[0] == 'X')
            player2[0] = 'O';
        else if(player1[0] == 'O')
            player2[0] = 'X';
        cout << "Thus, Player 2's symbol is: " << player2[0] << endl << endl;
        cout << "Let's Start the Game!" << endl << endl;
        while(count != 0)
        {   
            if(flag == 0)
            {
                cout << "Player 1- Enter position: ";
                cin >> arr1[0] >> arr1[1];
                if(ttt[arr1[0]][arr1[1]] == '_')
                {
                    ttt[arr1[0]][arr1[1]] = player1[0];
                    count--;
                }
                else
                {
                    cout << "Wrong position entered! Try Again!" << endl << endl;
                    continue;
                }
                cout << "Tic Tac Toe Grid View: " << endl;
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout << ttt[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
                if(ttt[0][0]==player1[0] && ttt[1][1]==player1[0] && ttt[2][2]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win = 1;
                    break;
                }
                else if(ttt[0][2]==player1[0] && ttt[1][1]==player1[0] && ttt[2][0]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win = 1;
                    break;
                }
                else if(ttt[0][1]==player1[0] && ttt[1][1]==player1[0] && ttt[2][1]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[1][0]==player1[0] && ttt[1][1]==player1[0] && ttt[1][2]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][0]==player1[0] && ttt[1][0]==player1[0] && ttt[2][0]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][0]==player1[0] && ttt[0][1]==player1[0] && ttt[0][2]== player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][2]==player1[0] && ttt[1][2]==player1[0] && ttt[2][2]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[2][0]==player1[0] && ttt[2][1]==player1[0] && ttt[2][2]==player1[0])
                {
                    cout << "Player 1 Won!" << endl;
                    win =1;
                    break;
                }
            }


            if(count != 0)
            {
                cout << "Player 2- Enter position: ";
                cin >> arr2[0] >> arr2[1];
                if(ttt[arr2[0]][arr2[1]] == '_')
                {
                    ttt[arr2[0]][arr2[1]] = player2[0];
                    flag = 0;
                    count--;
                }
                else
                {
                    cout << "Wrong position entered! Try Again!" << endl << endl;
                    flag = 1;
                    continue;
                }
                cout << "Tic Tac Toe Grid View: " << endl;
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout << ttt[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
                if(ttt[0][0]==player2[0] && ttt[1][1]==player2[0] && ttt[2][2]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][2]==player2[0] && ttt[1][1]==player2[0] && ttt[2][0]== player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][1]==player2[0] && ttt[1][1]==player2[0] && ttt[2][1]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[1][0]==player2[0] && ttt[1][1]==player2[0] && ttt[1][2]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][0]==player2[0] && ttt[1][0]==player2[0] && ttt[2][0]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][0]==player2[0] && ttt[0][1]==player2[0] && ttt[0][2]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[0][2]==player2[0] && ttt[1][2]==player2[0] && ttt[2][2]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
                else if(ttt[2][0]==player2[0] && ttt[2][1]==player2[0] && ttt[2][2]==player2[0])
                {
                    cout << "Player 2 Won!" << endl;
                    win =1;
                    break;
                }
            }
        }
        if(win == 0)
            cout << "It's a Draw! Nobody won or loss!" << endl;
        cout << endl;
        cout << "Do you want to play again? If Yes, then Enter '1' otherwise Enter '0' or anything else except '1': ";
        cin >> playagain[0];
        cout << endl;
        if(playagain[0] == 1)
        {
            cout << "Let's Play Again!" << endl;
            continue;
        }
        else
        {
            cout << "Thank You! Come Back Soon!" << endl << endl;
            break;
        }
    }
    return 0;
}