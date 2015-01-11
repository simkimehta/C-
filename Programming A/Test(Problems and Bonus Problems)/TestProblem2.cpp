#include <iostream>
using namespace std;

int main()
{
    int number, counter;
    cin >> number;
    counter = 0;

    string n;
    n = "o-o ";

    //cout << n << endl;

    do
    {
      cout << n;
      counter ++;
    }
    while(counter < number);
}
