#include <iostream>
using namespace std;

int main()
{
    int n;
    int b;
    cin >> n;
    b = 0;

    do
    {
      b = b + 1;
      cout << b << endl;
    }
    while (b < n);
}
