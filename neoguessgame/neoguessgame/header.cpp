#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdlib>
#include <ctime>

// Lab 5: Guessing Game with Header File
//Carter Smith
//C++ Fall 2023
//11/1/2023
//This game will give you a rondom number to guess and you have 20 tries to guess it. It will tell you if you are too high or too low.
//It will also tell you if you win or lose.
//It will also ask you if you want to play again and will keep track of your wins and losses, and will print them out when you quit the game.

using namespace std;

class Game {
public:
    //Random number generator
    Game() {
        srand(time(NULL));
        wins = 0;
        losses = 0;
    }
// here play again messages

    string askPlayAgain() {
        return getPlayAgainMessage();
    }

    // end of game print out
    void printScore() {
        cout << "Total wins: " << wins << endl;
        cout << "Total losses: " << losses << endl;
    }

    void play() {
        int answer = rand() % 101;
        int guess;
        int attempts = 0;
        bool win = false;

        do {
            cout << "Guess a number between 0 and 100: ";
            cin >> guess;

            if (guess == answer) {
                win = true;
                wins++;
                cout << getWinMessage() << endl;
            }
            else if (guess < answer) {
                cout << "Too low. ";
            }
            else {
                cout << "Too high. ";
            }

            attempts++;
        } while (!win && attempts < 20);

        if (!win) {
            losses++;
            cout << getLoseMessage() << endl;
        }

        cout << "Wins: " << wins << ", Losses: " << losses << endl;






    }

private:
    int wins;
    int losses;

    string getWinMessage() {
        switch (rand() % 10) {
        case 0:
            return "You won! Congratulations!";
        case 1:
            return "You guessed it right! Great job!";
        case 2:
            return "You're a winner! Keep it up!";
        case 3:
            return "You're amazing! You won!";
        case 4:
            return "You're a genius! You won!";
        case 5:
            return "You're on fire! You won!";
        case 6:
            return "You're unstoppable! You won!";
        case 7:
            return "You're the best! You won!";
        case 8:
            return "You're a champion! You won!";
        default:
            return "You're awesome! You won!";
        }
    }

    string getLoseMessage() {
        switch (rand() % 10) {
        case 0:
            return "Sorry, you lost. Better luck next time.";
        case 1:
            return "Oops, you didn't win this time.";
        case 2:
            return "Sorry, you didn't guess the number.";
        case 3:
            return "Sorry, you lost. Try again later.";
        case 4:
            return "Sorry, you didn't win this round.";
        case 5:
            return "Sorry, you lost. Don't give up!";
        case 6:
            return "Sorry, you didn't guess it right.";
        case 7:
            return "Sorry, you lost. Keep trying!";
        case 8:
            return "Sorry, you didn't win this game.";
        default:
            return "Sorry, you lost. Try harder next time.";
        }
    }

    // A function that returns a random play again message, chosen from 10 different messages
    string getPlayAgainMessage() {
        switch (rand() % 10) { // generate a random number from 0 to 9
        case 0:
            return "Do you want to play again? (y/n)";
        case 1:
            return "Are you up for another round? (y/n)";
        case 2:
            return "Would you like to try again? (y/n)";
        case 3:
            return "Are you ready for more? (y/n)";
        case 4:
            return "Do you feel lucky today? (y/n)";
        case 5:
            return "Are you having fun? (y/n)";
        case 6:
            return "Do you want to test your skills again? (y/n)";
        case 7:
            return "Do you want to challenge yourself again? (y/n)";
        case 8:
            return "Do you want to continue the game? (y/n)";
        default:
            return "Do you want to keep playing? (y/n)";
        }
    }




};

#endif