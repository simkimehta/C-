#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    do
    {
        if(n % 2 == 0)
        {
            n = n/2;
            cout << n << endl;
        }
        else
        {
            n = (n * 3) + 1;
            cout << n << endl;
        }

    }
    while(n != 1);
}
