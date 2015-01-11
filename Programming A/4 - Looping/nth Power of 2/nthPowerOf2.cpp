#include <iostream>
using namespace std;

int main()
{
    int n,c,b;
    cin >> n;
    c = 2;
    b = 1;

    do
    {
       b = b + 1;
       c = c * 2 ;
    }
    while (b < n);

    cout << c << endl;
}
