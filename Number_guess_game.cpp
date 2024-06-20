#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  // seed the random number generator
    int randomNumber = rand() % 100 + 1;        // random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100:" << endl;

    do {
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try again:" << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again:" << endl;
        }
    } while (guess != randomNumber);

    cout << "Congratulations! You guessed the number " << randomNumber << " correctly in " << attempts << " attempts." << endl;

    return 0;
}
