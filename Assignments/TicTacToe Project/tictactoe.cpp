#include <bits/stdc++.h>
using namespace std;

void displayBoard(vector<vector<char>> &board)
{
    cout << "\n";
    cout << "     1   2   3\n"; // Column headers
    cout << "   -------------\n";
    for (int i = 0; i < 3; ++i) {
        cout << " " << i + 1 << " | "; // Row header
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j]; // Print content of the cell
            if (j < 2) {
                cout << " | "; // Column separator
            }
        }
        cout << " |\n";
        if (i < 2) {
            cout << "   -------------\n"; // Row separator
        }
    }
    cout << "   -------------\n";
    cout << "\n";
}

void getPlayersInput(char currentPlayer, vector<vector<char>> &grid)
{
    bool validMove = false;

    while(!validMove)
    {
        cout << "Player " << currentPlayer << ", Enter your inpur int x y format: ";
        int x, y;
        cin >> x >> y;

        if (x > 0 && x <= 3 && y > 0 && y <= 3 && grid[x-1][y-1] == ' ')
        {
            grid[x-1][y-1] = currentPlayer;
            validMove = true;
        }
        else
        {
            cout << "Please enter a valid Input. Retry !" << endl;
        }
    }

}

bool checkWinner(vector<vector<char>> &grid, char currentPlayer)
{
    for(int i = 0; i < 3; i++) // Row Check
    {
        if (grid[i][0] == currentPlayer && grid[i][1] == currentPlayer && grid[i][2] == currentPlayer)
        {
            return 1;
        }
    }
    for(int i = 0; i < 3; i++) // Column Check
    {
        if (grid[0][i] == currentPlayer && grid[1][i] == currentPlayer && grid[2][i] == currentPlayer)
        {
            return 1;
        }
    }
    // Diagonal Check

    if (grid[0][0] == currentPlayer && grid[1][1] == currentPlayer && grid[2][2] == currentPlayer)
    return 1;

    // Anti Diagonal Check
    if (grid[0][2] == currentPlayer && grid[1][1] == currentPlayer && grid[2][0] == currentPlayer)
    return 1;


    return 0;
}

void switchPlayers(char &currentPlayer)
{
    if (currentPlayer == 'X')
    currentPlayer = 'O';
    else
    currentPlayer = 'X';
}


int main()
{
    vector<vector<char>> grid(3, vector<char>(3, ' '));

    char currentPlayer = 'X';
    bool gameEnd = false;
    int moves = 0;
    

    while(!gameEnd)
    {
        system("clear");
        displayBoard(grid);

        getPlayersInput(currentPlayer, grid);
        ++moves;
         // Check if winner
            // Exit the game 
        if (moves >= 5 && checkWinner(grid, currentPlayer))
        {
            displayBoard(grid); //Display the winning board
            cout << "Player " << currentPlayer << " Wins!. Good game" << endl;
            gameEnd = true;
        }
        else if (moves == 9)
        {
            // If there is a tie
            // Exit the game

            displayBoard(grid); //Display the Tie board
            cout << "Its a Tie !" << endl;
            gameEnd = true;
        }
        else  // Switch the player
        {
            switchPlayers(currentPlayer);
        }

    }

}