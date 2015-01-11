#include <iostream>
using namespace std;

int main()
{
    int c,d,e;
    c = 0;
    e = 0;

    do
    {
        cin >> d;
        e = d + e;
        c++;
    }
    while (c < 5);

    cout << e << endl;
}
