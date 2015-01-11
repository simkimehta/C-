#include <iostream>
using namespace std;

int main()
{
    int a,counter;
    cin >> a;
    counter = 0;

    int y[a];

    do
    {
        cin >> y [counter];
        counter ++;
    }
    while(counter < a);

    counter = 0;

    do
    {
        y[counter];
        if (y[counter] > y[a - 1])
        {
            cout << y[counter] << endl;
        }
        counter ++;
    }
    while (counter < a);

}
