#include <iostream>
using namespace std;

int main()
{
    int n, counter,c;
    cin >> n;
    counter = 0;
    c = 0;

    int y[n];

    do
    {
      cin >> y[counter];
      if (y[counter] == 7)
      {
         c ++;
      }

      counter ++;
    }
    while(counter < n);

    cout << c << endl;

}
