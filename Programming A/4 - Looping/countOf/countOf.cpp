#include <iostream>
using namespace std;

int main()
{
    int number;
    int counter;

    do
    {
        cin >> number;

        if (number != 0)
        {
            counter = counter + 1;
        }

    }
    while (number != 0);

    cout << counter << endl;

}
