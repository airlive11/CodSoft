#include <iostream>
using namespace std;

class NumberGuessing
{
    public:
            int userGuess;
            void input()
            {
                // Ask the user to guess the number.
                cout << "Guess a number between 1 and 100: " << endl;
                // Get the user's guess.
                cin >> userGuess;
            }
            void guess_calc()
            {
                int randomNumber = rand() % 100 + 1;
                while (userGuess != randomNumber) 
                {
                    if (userGuess > randomNumber) 
                    {
                        cout << "Your guess is too high. Try again." << endl;
                    } 
                    else 
                    {
                        cout << "Your guess is too low. Try again." << endl;
                    }
                    // Get the user's guess again.
                    cin >> userGuess;
                }
                 // The user has guessed the correct number!
                cout << "Congratulations! You guessed the correct number!" << endl;
            }
};
int main() 
{
    NumberGuessing ob; //creating the object 'ob' of class NumberGuessing
    ob.input();         //call input method 
    ob.guess_calc();     //call guess_calc method 
    return 0;
}