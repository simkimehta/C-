#include <iostream>
using namespace std;

int main()
{
    int x;
    int number;
    cin >> x;

    do
    {
        cin >> number;
        if (x < number)
        {
            cout << number << endl;
        }
    }
    while (number != 0);
}
