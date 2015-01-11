#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 20)
    {
        cout << "Whoops! Got to be lesser!" << endl;
    }
    else
    {
        int m[n];
        int b, previous;
        previous = 0;
        b = 0;
        do
        {
            cin >> m[b];
            previous = m[b] + previous;
            b = b + 1;
        }
        while (b != n);
        cout << previous << endl;
    }
}
