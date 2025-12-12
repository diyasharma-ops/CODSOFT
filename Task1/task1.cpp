#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it." << endl << endl;

    do {
        cout << "Enter your guess: ";
        if (!(cin >> guess)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer." << endl << endl;
            continue;
        }

        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl << endl;
        } else {
            cout << endl;
            cout << "Congratulations! You guessed the number "
                 << randomNumber << " correctly." << endl;
            cout << "Total attempts: " << attempts << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
