#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    while (true) {
        // Get user input
        string userChoice;
        cout << "Choose rock, paper, or scissors: ";
        cin >> userChoice;

        // Generate computer choice
        int computerChoice = rand() % 3;
        string computerChoiceStr;
        if (computerChoice == 0) {
            computerChoiceStr = "rock";
        } else if (computerChoice == 1) {
            computerChoiceStr = "paper";
        } else {
            computerChoiceStr = "scissors";
        }

        // Determine the winner
        cout << "You chose: " << userChoice << endl;
        cout << "Computer chose: " << computerChoiceStr << endl;

        if (userChoice == computerChoiceStr) {
            cout << "It's a tie!" << endl;
        } else if (
            (userChoice == "rock" && computerChoiceStr == "scissors") ||
            (userChoice == "paper" && computerChoiceStr == "rock") ||
            (userChoice == "scissors" && computerChoiceStr == "paper")
        ) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        // Play again?
        char playAgain;
        cout << "Do you want to play again? (y/n) ";
        cin >> playAgain;
        if (playAgain != 'y') {
            break;
        }
    }

    return 0;
}
