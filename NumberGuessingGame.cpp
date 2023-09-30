#include <iostream>
#include <cstdlib>
using namespace std;
void guessGame()
{
    int num, guess;
    num = rand();
    do
    {
        cout << "\nEnter a number that you guessed: ";
        cin >> guess;
        if (guess == num)
        {
            cout << "\nHurray!! Your guess is right" << endl;
            cout << "Thanks for playing :)"<<endl;
            return;
        }
        else if (guess > num)
            cout << "\nOops! your guess is wrong \nActual number is \"smaller\" than your guess"<<endl;
        else
            cout << "\nOops! your guess is wrong \nActual number is \"bigger\" than your guess"<<endl;

    } while (guess != num);
}
int main()
{
    char choice;
    do
    {
        cout << "\nPress Y/y to start the game: "<<endl;
        cout << "Press N/n to quit the game: "<<endl;
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
            guessGame();

    } while (choice == 'Y' || choice == 'y');
    return 0;
}