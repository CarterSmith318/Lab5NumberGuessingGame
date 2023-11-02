#include <iostream>
#include <cstdlib>
#include <ctime>
#include "header.cpp"

using namespace std;



int main() {
    Game game;

    char playAgain = 'y';

    do {
        game.play();

        cout << endl << game.askPlayAgain() << " ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');


    // Print the total wins and losses when you quit the game
    game.printScore();

    return 0;
}
