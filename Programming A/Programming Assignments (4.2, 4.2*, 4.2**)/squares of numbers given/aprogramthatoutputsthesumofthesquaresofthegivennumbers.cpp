#include <iostream>
using namespace std;

int main()
{
    int n,y;
    y= 0;

    do
    {
        cin >> n;
        n = n*n;
        y = y + n;
    }
    while (n != 0);
    cout << y << endl;
}
