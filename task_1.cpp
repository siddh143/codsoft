#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int Attempts = 0;

    cout<<"\t\t\t Welcome to the Number Guessing Game!\n\n"<<endl;
    
    cout<<"\t\t\t\tGOOD LUCK!\n\n";   
    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        Attempts++;

        if (guess > secretNumber) {
            cout << "Too high!\n";
        } else if (guess < secretNumber) {
            cout << "Too low!\n";
        } else {
            cout << "Congratulations! You guessed the number in " <<Attempts<< "Attempts\n";
        }
    } while (guess != secretNumber);

    return 0;
}
