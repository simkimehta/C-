#include <iostream>
using namespace std;

int main()
{
    int number;

    do
    {

        cin >> number;

        if (number % 7 == 3)
        {
            cout << number << endl;
        }

    }
    while (number != 0);
}
