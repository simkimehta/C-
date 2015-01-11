#include <iostream>
using namespace std;

int main()
{
    int secretnumber, guess;
    secretnumber = 7;

    do
    {
        cin >> guess;

        if (guess < 1 || guess > 100 )
        {
            cout << "Illegal number. The number can only be between 1 - 100" << endl;
        }

        else if (guess < secretnumber)
        {
            cout << "The number is greater" << endl;
        }
        else if (guess > secretnumber)
        {
            cout << "The number is lesser" << endl;
        }
        else if (guess = secretnumber)
        {
            cout << "correct!" << endl;
        }
    }
        while (guess != secretnumber);
}
