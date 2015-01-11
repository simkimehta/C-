#include <iostream>
using namespace std;

int main()
{
    int n,numbers,total,c;
    cin >> n;
    total = 0;
    c = 0;

    do
    {
          c = c + 1;
          cin >> numbers;
          total = total + numbers;
    }
    while (c < n);

    cout << total << endl;
}
