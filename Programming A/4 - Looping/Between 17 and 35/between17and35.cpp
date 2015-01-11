#include <iostream>
using namespace std;

int main()
{
    int a;

    do
    {
        cin >> a;

        if(a > 17 && a < 35)
        {
            cout << a << endl;
        }
    }
    while (a > 17 && a < 35);
}
